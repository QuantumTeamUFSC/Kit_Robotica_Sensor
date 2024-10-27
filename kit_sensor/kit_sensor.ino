#include <Robojax_L298N_DC_motor.h>


#define LED 2
//Define os pinos para o trigger e echo
const int pino_trigger = 5;
const int pino_echo = 4;

float duration, distance;

//-------------L298---------------------------------------------------
// motor 1 settings
#define CHA 6
#define ENA 8 // this pin must be PWM enabled pin if Arduino board is used
#define IN1 10
#define IN2 11
// motor 2 settings
#define IN3 12
#define IN4 13
#define ENB 9// this pin must be PWM enabled pin if Arduino board is used
#define CHB 7

const int CCW = 2; // do not change
const int CW  = 1; // do not change

#define motor1 1 // do not change
#define motor2 2 // do not change

// for two motors without debug information // Watch video instruciton for this line: https://youtu.be/2JTMqURJTwg
Robojax_L298N_DC_motor motors(IN1, IN2, ENA,  IN3, IN4, ENB);

void Forward() //電機前進
{
  motors.brake(1);  
  motors.brake(2);  

  motors.rotate(motor1, 70, CCW);
  motors.rotate(motor2, 70, CCW); 
}

void Reverse(){
  motors.brake(1);  
  motors.brake(2);  

  motors.rotate(motor1, 70, CW);
  motors.rotate(motor2, 70, CW);  
}
void Left()
{
  motors.brake(1);  
  motors.brake(2);  
  motors.rotate(motor1, 70, CW);//run motor2 at 60% speed in CCW direction  
}
void Right()
{
  motors.brake(1);  
  motors.brake(2);  
  motors.rotate(motor2, 70, CW);
}

void Stop() //電機停止
{
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  // motors.brake(1);
  // motors.brake(2);  
}
//-------------------------------------------------
void setup() 
{
  Serial.begin(9600);
  Serial.println(F("init"));
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(pino_trigger, OUTPUT);
  pinMode(pino_echo, INPUT);
  pinMode(LED, OUTPUT);

}
//-----------------------------------------
void loop() 
{
    //Le as informacoes do sensor, em cm e pol
    digitalWrite(pino_trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(pino_trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(pino_trigger, LOW);

    duration = pulseIn(pino_echo, HIGH);
    distance = (duration*.0343)/2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(100);

    // Forward();
    // Left();
    // Right();
    // Reverse();
    // Stop();

    if (distance <= 8) {
      Stop();
      delay(500);

      Left();
      delay(500);
    }
    else { Forward(); };

}
