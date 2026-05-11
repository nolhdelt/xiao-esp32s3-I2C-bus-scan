#include <Wire.h>

void scanBus() {
  Serial.println("---- I2C scan starting ----");
  int count = 0;

  for (uint8_t addr = 1; addr < 127; addr++) {
    Wire.beginTransmission(addr);
    uint8_t err = Wire.endTransmission();

    if (err == 0) {
      Serial.print("Found: 0x");
      if (addr < 16) Serial.print("0");
      Serial.println(addr, HEX);
      count++;
    }
  }

  if (count == 0) {
    Serial.println("No I2C devices found");
  }

  Serial.println("---- Scan done ----");
  Serial.println();
}

void setup() {
  Serial.begin(115200);
  delay(3000);
  Wire.begin(SDA, SCL);
}

void loop() {
  scanBus();
  delay(3000);
}