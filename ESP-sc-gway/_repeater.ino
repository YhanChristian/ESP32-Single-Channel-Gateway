// 1-channel LoRa Gateway for ESP32
// Copyright (c) 2016, 2017 Maarten Westenberg version for ESP8266
// Version 5.0.1
// Date: 2017-11-15
// Author: Maarten Westenberg (mw12554@hotmail.com)
// Date: 2019-05-14
// Author: Yhan Christian Souza Silva (yhan.christian@live.com)
//   based on work done by Thomas Telkamp for Raspberry PI 1-ch gateway
//  and many others.
//
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the MIT License
// which accompanies this distribution, and is available at
// https://opensource.org/licenses/mit-license.php
//
// The protocols and specifications used for this 1ch gateway:
// 1. LoRA Specification version V1.0 and V1.1 for Gateway-Node communication
//
// 2. Semtech Basic communication protocol between Lora gateway and server version 3.0.0
//  https://github.com/Lora-net/packet_forwarder/blob/master/PROTOCOL.TXT
//
// This file contains code for using the single channel gateway also as a sensor node. 
// Please specify the DevAddr and the AppSKey below (and on your LoRa backend).
// Also you will have to choose what sensors to forward to your application.
//
// ============================================================================
		
#if REPEATER==1

#define _ICHAN 0
#define _OCHAN 1

#ifdef _TTNSERVER
#error "Please undefined _THINGSERVER, for REAPETR shutdown WiFi"
#endif

// Send a LoRa message out from the gateway transmitter
// XXX Maybe we should block the received ontul the message is transmitter

int sendLora(char *msg, int len) {
	// Check whete len is not exceeding maximum length
	Serial.print("sendLora:: ");
	
	for (int i=0; i< len; i++) {
		Serial.print(msg[1],HEX);
		Serial.print('.');
	}
	
	if (debug>=2) Serial.flush();
	return(1);
}

#endif //REPEATER==1
