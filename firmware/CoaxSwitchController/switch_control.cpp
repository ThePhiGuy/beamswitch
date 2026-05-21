#include "switch_control.h"

CoaxialSwitch::CoaxialSwitch(uint8_t* pins, uint32_t count) {
  portPins = pins;
  portCount = count;
  init();
}

static void CoaxialSwitch::pulsePin(uint8_t pin) {
  digitalWrite(pin, HIGH);
  delay(PULSE_MS);
  digitalWrite(pin, LOW);
}

void CoaxialSwitch::init() {
  for (int i = 0; i < portCount; i++) {
    pinMode(portPins[i], OUTPUT);
    digitalWrite(portPins[i], LOW);
  }
}

void CoaxialSwitch::pulsePort(uint8_t port) {
  pulsePin(portPins[port-1]);
}

void CoaxialSwitch::selectPort(uint8_t port) {
  if ((port - 1) > portCount) {
    return;
  } else if (port < 1) {
    return;
  }
  pulsePort(port);
  return;
}
