#include "switch_control.h"

uint8_t switchPins[] = {52, 50};

CoaxialSwitch switch1(switchPins, 2);

void setup() {

  Serial.begin(115200);

  Serial.println("Coax Switch Control Ready");
  Serial.println("Send 1 or 2 to select a port");
}

void loop() {

  if (Serial.available() > 0) {

    char cmd = Serial.read();

    if (cmd == '1') {

      Serial.println("Selecting Port 1");
      switch1.selectPort(1);

    } else if (cmd == '2') {

      Serial.println("Selecting Port 2");
      switch1.selectPort(2);

    } else if (cmd == '\n' || cmd == '\r') {

      // Ignore newline characters

    } else {

      Serial.println("Invalid command");
    }
  }
}