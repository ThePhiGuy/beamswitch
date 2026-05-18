#include "switch_control.h"

void setup() {
  switchInit();
}

void loop() {
  switchToPort1();
  delay(1000);

  switchToPort2();
  delay(1000);
}