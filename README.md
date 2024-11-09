# Kit Robótica 

Este kit acompanha os seguintes componentes:
- 1x Arduino
- 1x Conector de bateria 9V
- 1x L298N
- 4x Jumpers Fêmea X Fêmea
- 1x Jumper Fêmea X Macho
- 1x Cabo microUSB
  
Para o devido funcionamento siga o circuito indicado abaixo.

Circuito:
FOTO

### Configuração do Arduino

#### Instalação do Driver para o Arduino

1. *Baixe e Instale o Driver:*

    - Antes de conectar o Arduino ao seu computador, é necessário instalar o driver adequado para garantir que o dispositivo seja reconhecido corretamente. Você pode encontrar o driver específico para o Arduino no seguinte link: [Instalação do Driver para Arduino - RoboCore](https://www.robocore.net/tutoriais/instalando-driver-do-nodemcu)
    - Siga as instruções no site para baixar e instalar o driver correspondente ao seu sistema operacional.
    - Caso o driver seja instalado e a porta COM do Arduino ainda não aparecer identifique se o cabo possui transferencia de dados ou se apenas serve para carregamento.
      
2. *Conectar o Arduino ao Computador:*

    - Após a instalação do driver, conecte o Arduino ao computador usando um cabo USB. Se tudo estiver correto, o dispositivo deverá ser reconhecido e uma nova porta COM será listada no seu sistema.

#### Configuração no Arduino IDE

3. *Instale o Arduino IDE:*

    - Se ainda não instalou, acesse o link [Download instalador arduino](https://www.arduino.cc/en/software)
       ![download_ard_installer](https://github.com/user-attachments/assets/7ca06d14-c575-41a3-bce6-e7283615bfca)
    - Escolha baseado no seu sistema oprecional. Caso seja windows, escolha versão 64bit.
    - Aceite as opções pré-selecionadas pelo instalador
    - Ao abrir a IDE recuse as opções de doação, para utilizar o software gratuitamente


4. *Selecionar a Placa Arduino UNO e a Porta COM:*

    - Após a instalação do pacote, vá em *Ferramentas > Placa* e selecione o modelo do seu Arduino na lista sob o título "ARDUINOUNO".
	![node 32s](https://github.com/user-attachments/assets/2bcf4f41-1795-4cfc-b833-11c3b75c60fe)

    - Vá em *Ferramentas > Porta* e selecione a porta COM que aparece (associada ao ARDUINO).

### Instalação das bibliotecas necessárias no Arduino IDE

Para instalar todas as bibliotecas necessárias, abra o Arduino IDE, vá em Rascunho > Incluir Biblioteca > Gerenciar Bibliotecas, e procure e instale as seguintes bibliotecas:

- L298N-DC-Motor by Robojax


### Upload do código para o ARDUINO

5. *Baixe o arquivo presente no repositório e abra-o no Arduino IDE*

6. *Selecione a placa como descrito na etapa 6 e clique na seta voltada para esquerda para realizar o upload*

Neste ponto o ARDUINO deve estar ligado e com o código já carregado nele

Divirta-se !!!
