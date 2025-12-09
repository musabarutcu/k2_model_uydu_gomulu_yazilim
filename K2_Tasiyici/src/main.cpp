/*
 * PROJE: Kategori 2 - Taşıyıcı Yük Yazılımı
 * DOSYA: main.cpp
 * KONUM: K2_Tasiyici/src/main.cpp
 * AMAÇ: Orkestra şefi. Diğer dosyaları çağırır ve zamanlamayı yönetir.
 */

#include <Arduino.h>
#include "Config.h"   // Ayarlar
#include "Sensors.h"  // Sensör fonksiyonları
#include "Comms.h"    // Haberleşme fonksiyonları

// --- SETUP: GÜÇ VERİLDİĞİNDE BİR KEZ ÇALIŞIR ---
void setup() {
    // 1. Seri Haberleşme Başlat (Bilgisayar ile konuşmak için)
    Serial.begin(115200);
    delay(1000); // Sistemin oturması için kısa bekleme
    
    Serial.println("--- K2 TASIYICI MODULU BASLATILDI ---");

    // 2. Alt Modülleri Başlat
    initSensors(); // Sensörleri hazırla
    initLoRa();    // LoRa modülünü hazırla
}

// --- LOOP: SONSUZA KADAR DÖNER ---
void loop() {
    // ADIM 1: VERİYİ OKU
    // Sensors.cpp dosyasındaki 'readPressure' fonksiyonunu çağırıyoruz.
    float anlikBasinc = readPressure();

    // ADIM 2: PAKETLE (Şartname Formatı)
    // Şartnameye göre Taşıyıcı verisinin kime ait olduğu belli olmalı.
    // Başına "T:" koyuyoruz ki Aktarım Uydusu "Ha bu Taşıyıcıdan gelmiş" desin.
    String paket = "T:" + String(anlikBasinc);

    // ADIM 3: GÖNDER
    // Hazırladığımız paketi Comms.cpp'deki gönderme fonksiyonuna veriyoruz.
    sendLoRaPacket(paket);

    // ADIM 4: BEKLE
    // Şartname: "Her saniye (1 Hz) veri iletecektir".
    // Config.h içinde TELEMETRY_FREQ = 1000 olarak tanımlı.
    delay(TELEMETRY_FREQ);
}