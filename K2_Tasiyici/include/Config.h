/*
 * DOSYA: Config.h
 * KONUM: K2_Tasiyici/include/Config.h
 * AMAÇ: Projenin "Anayasasıdır". Pin numaraları ve sabit ayarlar burada durur.
 * Kodun içinde "13" yazmak yerine "PIN_SERVO" yazarız ki, pin değişirse
 * sadece burayı güncelleyelim.
 */

#ifndef CONFIG_H // Çakışma önleyici (Header Guard)
#define CONFIG_H

#include <Arduino.h>

// --- YARIŞMA AYARLARI ---
#define TEAM_ID 12345        // Takım Numaranız
#define TELEMETRY_FREQ 1000  // Kaç milisaniyede bir veri gidecek? (1000ms = 1 Saniye)

// --- PIN HARİTASI (ESP32 DevKit V1) ---

// LORA MODÜLÜ (SPI Protokolü)
#define LORA_CS    5   // Chip Select (Modülü seçmek için)
#define LORA_RST   14  // Reset Pini
#define LORA_DIO0  26  // Interrupt (Veri geldiğinde işlemciyi uyandırmak için)
#define LORA_SCK   18  // Clock
#define LORA_MISO  19  // Master In Slave Out
#define LORA_MOSI  23  // Master Out Slave In

// SENSÖRLER (I2C Protokolü - Basınç Sensörü vb.)
#define I2C_SDA    21  // Data Hattı
#define I2C_SCL    22  // Saat Hattı

#endif // CONFIG_H Sonu