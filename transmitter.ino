#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

void setup() {
  Serial.begin(9600);
  driver.init();
}

void loop() {
  const char *msg = "1";

  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();

  delay(2000);
}
