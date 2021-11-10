//
// Created by map on 9. 11. 2021.
//

#ifndef UNTITLED2_TROJUHOLNIK_H
#define UNTITLED2_TROJUHOLNIK_H

#include <iomanip>
#include <iostream>
#include <fstream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

class Bod{
private:
    float x;
    float y;
public:
    Bod(); //vypyta x,y
    Bod(float a); //"a" inicializuje x aj y suradnicu
    Bod(float a, float  b); // inicializuje x a y

    float getDistance(const Bod&other) const; // nech pocita vzdialenostod pociatku [0,0] aj od druheho bodu pouzi impliccitny parameter
    Bod getCenter(const Bod&other) const;   //najde stred medzi dovma bodmi

    float getBod() const;

    //konstrukcie: vypis bodu [x,y];    sucet bodov;    rozdiel bodov;  bod*cislo;  bod / ciuslo
    Bod operator+(const Bod &other) const;
    Bod operator/(const Bod &other) const;
    friend Bod operator*(int c, const Bod &other);
    friend Bod operator/(int c, const Bod &other);


};




#endif //UNTITLED2_TROJUHOLNIK_H
