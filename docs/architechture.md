# System Architecture

This project is an Arduino Mega-based RF antenna switching controller that emulates a simplified rotator control interface compatible with Hamlib-style rotctl commands. This will be combined with TPM-II antennas in the given code, which provide wide enough beamwidth to have 4 provide nearly full azimuth coverage with good gain properties.

## Overview

Serial Input (rotcl format)
        ↓
Command Parser
        ↓
State Machine
        ↓
Antenna Selector
        ↓
GPIO Switch Driver (SPDT relays)

## Key Design Points
- No mechanical rotation (antenna switching only)
- Break-before-make switching logic
- Simple state machine for deterministic behavior
- Designed for future ESP32 port without logic changes