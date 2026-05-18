#include "switch_control.h"

CoaxialSwitch::CoaxialSwitch(uint8_t port1, uint8_t port2) {
  port1Pin = port1;
  port2Pin = port2;
  init();
}

static void CoaxialSwitch::pulsePin(uint8_t pin) {
  digitalWrite(pin, HIGH);
  delay(PULSE_MS);
  digitalWrite(pin, LOW);
}

void CoaxialSwitch::init() {
  pinMode(port1Pin, OUTPUT);
  pinMode(port2Pin, OUTPUT);

  digitalWrite(port1Pin, LOW);
  digitalWrite(port2Pin, LOW);
}

void CoaxialSwitch::pulsePort1() {
  pulsePin(port1Pin);
}

void CoaxialSwitch::pulsePort2() {
  pulsePin(port2Pin);
}

void CoaxialSwitch::switchToPort1() {
  pulsePort1();
}

void CoaxialSwitch::switchToPort2() {
  pulsePort2();
}

