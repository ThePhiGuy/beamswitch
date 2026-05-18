
#ifndef SWITCH_CONTROL_HPP
#define SWITCH_CONTROL_HPP

#include <Arduino.h>


#define PULSE_MS 50

class CoaxialSwitch {
  public:
    CoaxialSwitch(uint8_t port1, uint8_t port2);
    void switchToPort1();
    void switchToPort2();
  private:
    void pulsePin(uint8_t pin);
    void pulsePort1();
    void pulsePort2();
    void init();
    uint8_t port1Pin;
    uint8_t port2Pin;
};

#endif