#include "Antenna.h"

double wrap360(double angle) {
    angle = fmod(angle, 360.0);
    if (angle < 0) angle += 360.0;
    return angle;
}

// Useful figures: HPBW for TPM-II is 70deg (+45 -> -45) in az and 45 deg (0 -> 45) in el
Antenna::Antenna(string name, double hpbwAzimuth, double bearing, double elevation, double hpbwElevation, double gain) {
    myGain = gain;
    myMinAzimuth = 
    myMaxAzimuth = 
    if (elevation < hpbwElevation) {
        myMinElevation = 0; // perp to the ground
    } else if (elevation > 0) {
        myMinElevation = elevation - 
    }
        
    myMaxElevation = 
}

double Antenna::distance(double azimuth, double elevation) const {

}

string Antenna::getName() const {
    return myName;
}

double Antenna::getGain() const {
    return myGain;
}