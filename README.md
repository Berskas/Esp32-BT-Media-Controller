[Türkçe](READMETR.md)

# 🎵 ESP32 BLE Media Controller

A wireless media controller based on ESP32 that connects via Bluetooth. Control your music with physical buttons from any device.

## Features

- ⏮ Previous track
- ⏯ Play / Pause
- ⏭ Next track
- 🔊 Volume up
- 🔉 Volume down
- 🔇 Mute

## Hardware

| Component | Quantity |
|---|---|
| ESP32 (any model) | 1 |
| Push button (6x6mm or similar) | 6 |
| Breadboard / PCB | 1 |

## Pin Connections

| Button | ESP32 Pin |
|---|---|
| Previous Track | GPIO 15 |
| Play / Pause | GPIO 5 |
| Next Track | GPIO 4 |
| Volume Up | GPIO 22 |
| Volume Down | GPIO 19 |
| Mute | GPIO 21 |

> **Note:** Buttons should be connected between GND and the GPIO pin. Since `INPUT` mode has no internal pull-up, using an external pull-up resistor (10kΩ) is recommended — or change the mode to `INPUT_PULLUP` in the code.

## Getting Started

### Requirements

- [PlatformIO](https://platformio.org/)  or [Arduino IDE](https://www.arduino.cc/en/software)
- Any ESP32 board

### Steps

### 1. Using PlatformIO.
1. Clone the repo:
   ```bash
   git clone https://github.com/Berskas/esp32-ble-media-controller.git
   cd esp32-ble-media-controller
   ```
j
2. Open in VS Code with PlatformIO installed.

3. The required library is defined in `platformio.ini` and will be downloaded automatically:
   ```
   T-vK/ESP32-BLE-Keyboard
   ```

4. Connect your ESP32 via USB and upload:
   ```bash
   pio run --target upload
   ```

### 2. Using Arduino IDE
1. Clone the repo:
   ```bash
   git clone https://github.com/Berskas/esp32-ble-media-controller.git
   cd esp32-ble-media-controller
   ```
2. Open the Arduino IDE 

3. Install the library via Library Manager (search `ESP32 BLE Keyboard` by T-vK).

4. Connect your ESP32 via USB and upload.

## Usage

1. Power on the ESP32.
2. Open Bluetooth settings on your phone or computer and connect to **"My Hub"**.
3. Use the buttons to control your media.

## Library

This project uses [T-vK/ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard).


