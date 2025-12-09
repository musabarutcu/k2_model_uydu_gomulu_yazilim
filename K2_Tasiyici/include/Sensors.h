/*
 * DOSYA: Sensors.h
 * KONUM: K2_Tasiyici/include/Sensors.h
 * AMAÇ: Sensör fonksiyonlarının "Menüsü" (Prototipler).
 * main.cpp dosyası, hangi fonksiyonları çağırabileceğini buradan öğrenir.
 */

#ifndef SENSORS_H
#define SENSORS_H

#include <Arduino.h>

// --- FONKSİYON TANIMLARI ---

// Sensörleri başlatan (setup) fonksiyon.
// Geriye değer döndürmez (void).
void initSensors();

// Basıncı okuyan fonksiyon.
// Geriye virgüllü sayı (float) döndürür.
float readPressure();

#endif