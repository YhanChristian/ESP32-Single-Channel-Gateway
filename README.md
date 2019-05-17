# ESP32-Single-Channel-Gateway 

Este é um fork do projeto ESP2 SCH Gateway com algumas modificações. Essas são:

- Atualização para a versão 6 da biblioteca Arduino Json;
- Alteração para o servidor NTP utilizado no Brasil;
- Inserção de comentários no código Fonte;
- Adaptação para frequência de 915MHz utilizada no Brasil.

O projeto original é Single Channel LoRaWAN Gateway disponível em: https://github.com/kersing/ESP-1ch-Gateway-v5.0. O mesmo foi adaptado para o seguinte projeto ESP32SingleChannelGateway, disponível em: https://github.com/vpcola/ESP32SingleChannelGateway. E adaptado para o Brasil.

# Descrição 

Este repositório foi adaptado para o uso no Brasil para criar um Gateway DIY Single Channel com o ESP-32. Alterando o mínimo possível do projeto original e complementando os comentários para facilitar a utilização.

# Utilização 

Para utilizar este código fonte, faça o download do arquivo .zip, contendo os arquivos .ino e .h e as bibliotecas necessárias para funcionamento. Copie as bibliotecas para o diretório: ~/Documents/Arduino/libraries, ou conforme for salvo em sua máquina. No código fonte será necessário alterar apenas 2 arquivos para o funcionamento.

 ## ESP-sc-gway.h  
 
 O ESP-sc-gway.h contém todos os arquivos de configuração, sendo necessário alterar os seguintes itens:
 
 ### Definições Acess point

```c
#ifdef ESP32BUILD
#define AP_NAME "Coloque o nome do seu AP"
#else
#define AP_NAME "Coloque o nome do seu AP"
#endif
#define AP_PASSWD "12345678" 
```

 ### Definições server TTN
 
 ```c
#define _TTNPORT 1700						// Standard port for TTN
#define _TTNSERVER "router.us.thethings.network"
```
 Atenção! Quando cadastrar o gateway no The Thinks Network, selecione o servidor americano, o servidor brasileiro apresenta muita instabilidade e problemas com conexão.

### Descrições do seu gateway

 ```c
#define _DESCRIPTION "Description of your Gateway"
#define _EMAIL "your e-mail"
#define _PLATFORM "ESP32"
#define _LAT 1 // check the latitude of your region
#define _LON 1 // check the longitude of your region 
#define _ALT 1
```
### Definições Servidor NTP
 ```c
#define NTP_TIMESERVER "a.st1.ntp.br"	// Country and region specific 
#define NTP_TIMEZONES	-3					// How far is our Timezone from UTC (excl daylight saving/summer time)
#define SECS_PER_HOUR	3600
#define NTP_INTR 0	
```

## Definições de sua rede WiFi

 ```c
wpas wpa[] = {
  { "" , "" },              // Reserved for WiFi Manager
  { "your-ssid", "your-password" },
  { "", "" }
};
```
 ## loraModem.h
 
 O arquivo loraModem.h contém as definições de como seu gateway irá trabalhar. Será necessário apenas selecionar a frequência de trabalho, conforme a seguir:
 
  ```c

// In Brazil we use 915MHz as the USA

int freqs [] = {
  902300000,
  903000000,
  915000000,
  923300000,
};

uint32_t  freq = freqs[2];
uint8_t	 ifreq = 0;								// Channel Index
};
```
 
# Bibliotecas Necessárias 

- gBase64 library: https://github.com/adamvr/arduino-base64);
- Time library (http://playground.arduino.cc/code/time);
- Arduino JSON v6; 
- SimpleTimer;
- ESP8266 Web Server;
- Streaming library;
- AES library;
- Time;
- ESP8266_Oled_Driver_for_SSD1306_display;
- WebServer TNG;
- WiFi ESP.

# Futuras implantações

- Tradução de todos comentários do código fonte para português (Brasil);
- WiFi Manager com ESP-32;
- OTA (Over The Air);
- Otimização do uso do SPIFFS;
- Criação de uma página web para as principais configurações.
