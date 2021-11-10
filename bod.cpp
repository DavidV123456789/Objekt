//
// Created by map on 9. 11. 2021.
//
#include "trojuholnik.h"
Bod::Bod() {
    float x;
    float y;
    std::cout<<"Zadaj x: ";
    std::cin>>x;
    std::cout<<"Zadaj y: ";
    std::cin>>y;
    this->x=x;
    this->y=y;
}

Bod::Bod(float a) {
    this->x=a;
    this->y=a;

}

Bod::Bod(float a, float b) {
    this->x=a;
    this->y=b;

}

float Bod::getDistance(const Bod &other) const {
//sqrt((x2-x1)upper2 + (y2-y1)upper2)
    return sqrt(other.x*other.x+other.y*other.y);
}

Bod Bod::getCenter(const Bod &other) const {
    Bod N;
    N.x=(this->x+other.x)/2;
    N.y=(this->y+other.y)/2;
    return N;
}

float Bod::getBod() const {
    std::cout<<"[,]";
    return 0;
}

Bod Bod::operator+(const Bod &other) const {
    Bod N;
    N.x=this->x+other.x;
    N.y=this->y+other.y;

    return N;
}

Bod Bod::operator/(const Bod &other) const {
    Bod N;
    N.x=this->x+other.x;
    N.y=this->y+other.y;

    return N;
}

Bod operator*(int c, const Bod &other) {
    Bod N;
    N.x=other.x*c;
    N.y=other.y*c;

    return N;
}

Bod operator/(int c, const Bod &other) {
    Bod N;
    N.x=other.x/c;
    N.y=other.y/c;

    return N;
}
