//
// Created by map on 27. 9. 2021.
//
#include "kruh.h"

int Kruh::getPolomer() const {
    return polomer;
}
//(Kruh::)len v c++. Ide o zdieľanú pamäť objektu (menný priestor).
void Kruh::setPolomer(int r) {
     polomer= r;
}

float Kruh::getObvod() const {
    return 2*PI*polomer;
}

float Kruh::getObsah() const {
    return PI*polomer*polomer;
}

Kruh Kruh::spocitajKruhy(Kruh other) const {
    Kruh Treti; //vytvorime novy kruh
    Treti.polomer = this->polomer + other.polomer; // this = pointer na seba sameho, pouziva sa sipka nie bodka, odkazuje sa na objekt ktoreho metodu volam, na seba sameho, do
    return  Treti;// vrat kruh
}

Kruh Kruh::spocitajKruhy() const {
    Kruh Novy;
    int polomer;
    std::cout<<"Zadaj polomer:";
    std::cin>>polomer;
    Novy.polomer= this->polomer+polomer;
    return polomer;
}

Kruh Kruh::spocitajKruhy(const Kruh *other) const {



}

Kruh::Kruh() {
    int mPolomer;
    std::cout<<"Zadaj polmer:";
    std::cin>>mPolomer;
    this->polomer=mPolomer
}

Kruh::Kruh(int r) {
    this->polomer=r;
}
