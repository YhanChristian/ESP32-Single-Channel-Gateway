# ESP32-Single-Channel-Gateway 

Este é um fork do projeto ESP2 SCH Gateway com algumas modificações. Essas são:

* Atualização para a versão 6 da biblioteca Arduino Json;
* Alteração para o servidor NTP utilizado no Brasil;
- Inserção de comentários no código Fonte;
- Adaptação para frequência de 915MHz utilizada no Brasil.

O projeto original é Single Channel LoRaWAN Gateway disponível em: https://github.com/kersing/ESP-1ch-Gateway-v5.0. O mesmo foi adaptado para o seguinte projeto ESP32SingleChannelGateway, disponível em: https://github.com/vpcola/ESP32SingleChannelGateway. E adaptado para o Brasil.

# Descrição 

Este repositório foi adaptado para o uso no Brasil para criar um Gateway DIY Single Channel com o ESP-32. Alterando o mínimo possível do projeto original e complementando os comentários para facilitar a utilização.

# Utilização 

Para utilizar este código fonte, faça o download do arquivo .zip, contendo os arquivos .ino e .h e as bibliotecas necessárias para funcionamento. Copie as bibliotecas para o diretório: ~/Documents/Arduino/libraries, ou conforme for salvo em sua máquina. No código fonte será necessário alterar apenas 2 arquivos para o funcionamento.

 ## SP-sc-gway.h  

# Bibliotecas Necessárias 

- gBase64 library: https://github.com/adamvr/arduino-base64);
- Time library (http://playground.arduino.cc/code/time)
- Arduino JSON v6; 
- SimpleTimer; ot yet used, but reserved for interrupt and timing;
- ESP8266 Web Server;
- Streaming library;
- AES library;
- Time;
- ESP8266_Oled_Driver_for_SSD1306_display;
- WebServer TNG;

