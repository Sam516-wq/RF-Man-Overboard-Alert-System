# 🚢 RF Man Overboard Alert System

![Project Banner](images/diagram.png)

---

##  Project Overview
This project is a **wireless safety system** designed to detect a "Man Overboard" condition using RF communication.

When the transmitter signal is lost, the system immediately triggers an alert using a buzzer and LED indicators.

---

##  Objectives
- Detect signal loss in real-time
- Provide instant alert (buzzer + LED)
- Ensure safety monitoring in marine environments

---

##  Components Used

| Component | Quantity |
|----------|--------|
| Arduino UNO/Nano | 2 |
| 433 MHz RF Module (HR433A) | 1 Tx + 1 Rx |
| LEDs (Red, Green) | 2 |
| Buzzer | 1 |
| Resistors (220Ω) | 2 |
| Battery | 1 |

---

##  Working Principle

1. Transmitter sends signal every 2 seconds  
2. Receiver continuously monitors signal  
3. If signal is lost:
   - 🔴 Red LED ON  
   - 🔔 Buzzer ON  
4. If signal present:
   - 🟢 Green LED ON  

---

## 🔌 Circuit Diagram

![Circuit Diagram](images/diagram.png)

---

## 💻 Code

### Transmitter
```cpp
// (your code here)
