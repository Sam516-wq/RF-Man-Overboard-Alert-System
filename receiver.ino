#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

int greenLED = 7;
int redLED = 6;
int buzzer = 8;

unsigned long lastReceived = 0;

void setup() {
  Serial.begin(9600);
  driver.init();

  lastReceived = millis();

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(redLED, HIGH);
}

void loop() {
  uint8_t buf[12];
  uint8_t buflen = sizeof(buf);

  if (driver.recv(buf, &buflen)) {
    lastReceived = millis();

    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  }

  if (millis() - lastReceived > 5000) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
  }
}
