/*
 * DOSYA: Comms.cpp
 * KONUM: K2_Tasiyici/src/Comms.cpp
 * AMAÇ: Haberleşme kodlarının çalıştığı yer.
 */

#include "Comms.h"
#include "Config.h"

// --- LORA BAŞLATMA ---
void initLoRa() {
    Serial.println("INFO: LoRa Modulu (433 MHz) Hazirlaniyor...");
    
    // Burada Config.h dosyasındaki LORA_CS, LORA_RST pinlerini kullanacağız.
    // Şimdilik donanım olmadığı için boş geçiyoruz.
}

// --- VERİ GÖNDERME ---
void sendLoRaPacket(String data) {
    // --- SİMÜLASYON ---
    // LoRa modülü takılı olmadığı için veriyi USB kablosundan (Serial) yazdırıyoruz.
    // Böylece Yer İstasyonu (bilgisayar) veriyi görebiliyor.
    
    Serial.print("[LORA TX - Giden Veri] -> ");
    Serial.println(data); 
    
    // NOT: Gerçek LoRa kodu şuna benzeyecek:
    // LoRa.beginPacket();
    // LoRa.print(data);
    // LoRa.endPacket();
}