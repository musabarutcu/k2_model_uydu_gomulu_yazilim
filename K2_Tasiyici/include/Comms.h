
// DOSYA: Comms.h
// AMAÇ: Haberleşme (LoRa) fonksiyonlarının listesi.


#ifndef COMMS_H
#define COMMS_H

#include <Arduino.h>

// LoRa modülünü başlatan fonksiyon
void initLoRa();

// Veriyi gönderen fonksiyon
// 'data' parametresi: Gönderilecek mesaj (String türünde)
void sendLoRaPacket(String data);

#endif