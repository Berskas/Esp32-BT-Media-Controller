# 🎵 ESP32 BLE Medya Kontrolcüsü

ESP32 tabanlı, Bluetooth ile bağlanan kablosuz medya kontrolcüsü. Fiziksel butonlarla herhangi bir cihazdan müziğini kontrol et.

## Özellikler

- ⏮ Önceki parça
- ⏯ Oynat / Duraklat
- ⏭ Sonraki parça
- 🔊 Ses artır
- 🔉 Ses azalt
- 🔇 Sessiz

## Donanım

| Bileşen | Adet |
|---|---|
| ESP32 (herhangi bir model) | 1 |
| Buton (6x6mm veya benzeri) | 6 |
| Breadboard / PCB | 1 |

## Pin Bağlantıları

| Buton | ESP32 Pin |
|---|---|
| Önceki Parça | GPIO 15 |
| Oynat / Duraklat | GPIO 5 |
| Sonraki Parça | GPIO 4 |
| Ses Artır | GPIO 22 |
| Ses Azalt | GPIO 19 |
| Sessiz | GPIO 21 |

> **Not:** Butonlar GND ile GPIO pini arasına bağlanmalıdır. `INPUT` modunda dahili pull-up olmadığından harici pull-up direnci (10kΩ) kullanmanız önerilir — ya da kodda modu `INPUT_PULLUP` olarak değiştirebilirsiniz.

## Başlarken

### Gereksinimler

- [PlatformIO](https://platformio.org/) veya [Arduino IDE](https://www.arduino.cc/en/software)
- Herhangi bir ESP32 kartı

### Adımlar

### 1. PlatformIO ile

1. Repoyu klonla:
   ```bash
   git clone https://github.com/Berskas/esp32-ble-media-controller.git
   cd esp32-ble-media-controller
   ```

2. PlatformIO yüklü VS Code ile aç.

3. Gerekli kütüphane `platformio.ini` içinde tanımlıdır ve otomatik olarak indirilir:
   ```
   T-vK/ESP32-BLE-Keyboard
   ```

4. ESP32'yi USB ile bağla ve yükle:
   ```bash
   pio run --target upload
   ```

### 2. Arduino IDE ile

1. Repoyu klonla:
   ```bash
   git clone https://github.com/Berskas/esp32-ble-media-controller.git
   cd esp32-ble-media-controller
   ```

2. Arduino IDE'yi aç.

3. Kütüphaneyi Kütüphane Yöneticisi üzerinden yükle (`ESP32 BLE Keyboard` by T-vK olarak ara).

4. ESP32'yi USB ile bağla ve yükle.

## Kullanım

1. ESP32'ye güç ver.
2. Telefon veya bilgisayarının Bluetooth ayarlarından **"My Hub"** cihazına bağlan.
3. Butonları kullanarak medyayı kontrol et.

## Kütüphane

Bu proje [T-vK/ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard) kütüphanesini kullanmaktadır.
