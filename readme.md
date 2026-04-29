# UHF Antenna Switcher Module

A self-contained receive switcher module using a binary tree of HP 33311X SPDT coaxial switches to select between four TPM-2 antennas at static orientations, emulating rotator-based tracking without moving parts.

https://thanehams.wordpress.com/wp-content/uploads/2012/03/tpm2_eggbeater-antenna.pdf

Emulating this project that was done with a manual switch, but with electronic emulation of a rotator.

---

## Overview

Rather than using a mechanical rotator, this module mounts four TPM-2 antennas at fixed elevations and azimuths to provide overlapping sky coverage. An MCU selects the best antenna port based on calculated satellite position, switching between them using a 1-of-4 binary switch tree built from three HP 33311X SPDT coaxial switches. The selected signal passes through a BPF and LNA before reaching the RTL-SDR receiver.