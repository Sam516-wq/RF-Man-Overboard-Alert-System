# 🚢 RF Man Overboard Alert System

## 📌 Overview
Arduino-based RF system to detect signal loss and trigger alarm.

## 🧩 Components
- Arduino UNO/Nano
- 433MHz RF Tx/Rx (HR433A)
- LEDs (Red & Green)
- Buzzer
- Resistors (220Ω)

## ⚙️ Working
- Transmitter sends signal every 2 sec
- Receiver checks signal
- If no signal → Buzzer ON + Red LED
- If signal present → Green LED ON

## 🔌 Connections

### Transmitter
- DATA → D12
- VCC → 5V
- GND → GND

### Receiver
- DATA → D11
- Green LED → D7
- Red LED → D6
- Buzzer → D8

## 📡 Range
- Without antenna: ~0.5m
- With antenna: up to 100m

## 👨‍💻 Author
Satyam Jha
