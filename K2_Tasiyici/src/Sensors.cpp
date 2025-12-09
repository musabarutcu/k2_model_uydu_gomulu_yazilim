/*
 * DOSYA: Sensors.cpp
 * KONUM: K2_Tasiyici/src/Sensors.cpp
 * AMAÇ: Sensör işlerinin yapıldığı mutfak.
 */

// PlatformIO, 'include' klasörünü otomatik gördüğü için
// başına klasör yolu yazmadan direkt ismini yazabiliriz.
#include "Sensors.h" 
#include "Config.h"

// --- SENSÖRLERİ BAŞLATMA ---
void initSensors() {
    Serial.println("INFO: Tasiyici Basinc Sensoru Baslatiliyor...");
    
    // Gerçek sensörler (MS5611 vb.) geldiğinde burada 'Wire.begin()' gibi kodlar olacak.
    // Şimdilik sadece simülasyon yapıyoruz.
    delay(100); 
}

// --- BASINÇ OKUMA ---
float readPressure() {
    // --- SİMÜLASYON ---
    // Gerçek sensör yokken kodun çalıştığını test etmek için rastgele sayı üretiyoruz.
    
    // 101325.0 -> Standart deniz seviyesi basıncı (Pascal)
    // random(-50, 50) -> Veriyi biraz titretir ki canlı olduğu belli olsun.
    float sanalBasinc = 101325.0 + random(-50, 50);
    
    return sanalBasinc;
    
    // NOT: Gerçek sensör geldiğinde burası şöyle olacak:
    // return ms5611.readPressure();
}