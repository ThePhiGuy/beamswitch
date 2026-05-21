#ifndef ANTENNA_HPP
#define ANTENNA_HPP

#include <string>
#include "math.h"



using namespace std;

double wrap360(double angle);

class Antenna {
    public:
        Antenna(string name, double hpbwAzimuth, double bearing, double elevation, double hpbwElevation, double gain);
        double distance(double azimuth, double elevation) const;
        string getName() const;
        double getGain() const;
    private:
        string myName;
        double myAzimuth;
        double myElevation;
        double myHPBWAzimuth;
        double myHPBWElevation;
        double myGain;
};

#endif