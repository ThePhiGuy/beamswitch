
#ifndef SWITCH_CONTROL_HPP
#define SWITCH_CONTROL_HPP

#include <Arduino.h>


#define PULSE_MS 50

class CoaxialSwitch {
  public:
    CoaxialSwitch(uint8_t* pins, uint32_t count);
    void CoaxialSwitch::selectPort(uint8_t port);
  private:
    void pulsePin(uint8_t pin);
    void pulsePort(uint8_t port);
    void init();
    uint8_t* portPins;
    uint32_t portCount;
};

#endif