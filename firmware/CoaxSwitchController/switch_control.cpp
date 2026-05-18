#include "switch_control.h"
#include "config.h"

static void pulsePin(uint8_t pin) {
  digitalWrite(pin, HIGH);
  delay(PULSE_MS);
  digitalWrite(pin, LOW);
}

void switchInit() {
  pinMode(PORT1_PIN, OUTPUT);
  pinMode(PORT2_PIN, OUTPUT);

  digitalWrite(PORT1_PIN, LOW);
  digitalWrite(PORT2_PIN, LOW);
}

void pulsePort1() {
  pulsePin(PORT1_PIN);
}

void pulsePort2() {
  pulsePin(PORT2_PIN);
}

void switchToPort1() {
  pulsePort1();
}

void switchToPort2() {
  pulsePort2();
}