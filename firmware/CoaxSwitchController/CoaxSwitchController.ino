#include "switch_control.h"

  CoaxialSwitch switch1(52, 50);
  CoaxialSwitch switch2(48, 46);
  CoaxialSwitch switch3(44, 42);

void setup() {
  CoaxialSwitch switch1(52, 50);
  CoaxialSwitch switch2(48, 46);
}

void loop() {
  switch1.switchToPort1();
  delay(100);

  switch1.switchToPort2();
  delay(100);

  switch2.switchToPort1();
  delay(100);

  switch2.switchToPort2();
  delay(100);

  switch3.switchToPort1();
  delay(100);

  switch3.switchToPort2();
  delay(100);

}