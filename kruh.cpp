//
// Created by map on 27. 9. 2021.
//
#include "kruh.h"
/*
int Kruh::getPolomer() const {
    return polomer;
}

//(Kruh::)len v c++. Ide o zdieľanú pamäť objektu (menný priestor).
void Kruh::setPolomer(int r) {
    polomer= r;
}
 */

float Kruh::getObvod() const {
    return 2*PI*polomer;
}

float Kruh::getObsah() const {
    return PI*polomer*polomer;
}

Kruh Kruh::spocitajKruhy(Kruh other) const {
    //Kruh Treti; //vytvorime novy kruh
    //Treti.polomer = this->polomer + other.polomer; // this = pointer na seba sameho, pouziva sa sipka nie bodka, odkazuje sa na objekt ktoreho metodu volam, na seba sameho, do
    //return  Treti;// vrat kruh
    return Kruh( this->polomer+other.polomer); // 1. možnost
    // return Kruh(his->polomer+other.polomer) // 2. možnost
}

Kruh Kruh::spocitajKruhy() const {
    /*
    Kruh Novy;
    int polomer;
    std::cout<<"Zadaj polomer:";
    std::cin>>polomer;
    Novy.polomer= this->polomer+polomer;
    return polomer;
    */
    return Kruh (this->polomer+polomer);
}

Kruh Kruh::spocitajKruhy(const Kruh *other) const {
    /*
    Kruh Novy;
    Novy.polomer=this->polomer+other->polomer;
    return  Novy;
     */
    return Kruh(this->polomer+other->polomer) ;
}

Kruh::Kruh() {
    //int mPolomer;
    //std::cout<<"Zadaj polmer:";
    //std::cin>>mPolomer;
    //this->polomer=mPolomer;

}

Kruh::Kruh(int r):polomer(r) //iniciačný zoznam premenných
 {
    //this->polomer=r;
}

Kruh Kruh::odcitajKruhy(const Kruh *other) const {
    int v= this->polomer-other->polomer;
    return (polomer<other->polomer)? 1:v;
}

Kruh Kruh::odcitajKruhy(const Kruh other) const {
    int v= this->polomer-other.polomer;
    return (polomer<other.polomer)? 1:v;
}

Kruh Kruh::odcitajKruhy() const {
    //int v= this->polomer-other->polomer
    //return (polomer<otherher->polomer)? 1:v;
}

void Kruh::vymenKruhy(Kruh *prvy, Kruh *druhy) {
    Kruh std( 0);
    std=*prvy;
    *prvy= *druhy;
    *druhy= std;

}

void Kruh::vymenKruhy(Kruh &prvy, Kruh &druhy) {
    Kruh std( 0);
    std = prvy;
    prvy = druhy;
    druhy = std;
}

Kruh Kruh::operator+(const Kruh &other) const {


    return {polomer+other.polomer};
    //alternatíva// return Kruh(polomer+other.polomer);
}

bool Kruh::operator<(const Kruh &other) const {
    return polomer<other.polomer;
}

Kruh Kruh::operator-(const Kruh &other) const {
    int v= this->polomer-other.polomer;
    return (polomer<other.polomer)? 1:v;
}

Kruh Kruh::operator*(int cislo) const {
    return Kruh(polomer*cislo);
}

Kruh Kruh::operator+(int cislo) const {
    return {polomer+ cislo};
}

Kruh Kruh::operator-(int cislo) const {
    return (polomer>cislo)?Kruh( polomer-cislo):Kruh( 1);
}

bool Kruh::jeMensi(const Kruh *other) {
    return (polomer<other->polomer)? true:false;// ak je odpoved ano tak true ak nie tak flase
}



Kruh Kruh::operator++(int nepouzijem) {
    Kruh Tmp = (*this); //vytvaram objekt v zasobniku ktory sa premaze ihned po dokonceni funkcie, preto nemozeme
    ++polomer;
    return  Tmp;
}





const Kruh &Kruh::operator--() {
    polomer= (polomer-1<0)?1:polomer-1;
    return  (*this);
}

Kruh Kruh::operator--(int nepouzijem) {
    Kruh Tmp = (*this);
    polomer= (polomer-1<0)?1:polomer-1;
    return  Tmp;
}

const Kruh &Kruh::operator+=(int cislo) const {
    return Kruh(polomer+cislo);
}

const Kruh &Kruh::operator-=(int cislo) const {
    return (polomer>cislo)?Kruh( polomer-cislo):Kruh( 1);
}

Kruh operator+(int cislo, const Kruh &other) {
    return  other+cislo;
}

const Kruh &Kruh::operator++() {
    ++polomer;
    return (*this); //this znamena že vráti len odkaz na daný objekt
}

Kruh operator*(int cislo, const Kruh &other) {
    return Kruh(cislo*other);
}

std::ostream &operator<<(std::ostream &os, const Kruh &mojKruh) {
    os<<"Kruh ma polemer"<<mojKruh.polomer<<std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Kruh &mojKruh) {
    std::cout<<"Zadaj polomer:";
    is>>mojKruh.polomer;
    return is;
}

void Kruh::generujPoleKruhov(Kruh *pole, int pocet) {
    std::srand(time(0));
    for(int i=0;i<pocet;++i){
        (pole+i)->polomer=std::rand()%99 + 1;
    }
}

void Kruh::vypispoleKruhov(const Kruh *pole, int pocet) {
    for(int i=0;i<pocet;++i){
        std::cout<<*(pole+i);
    }

}

Kruh Kruh::getMaxKruh(const Kruh *pole, int pocet) {
    int max;
    for (int i=0; i<pocet;++i) {
        if(pole+i>pole+i+1){
            
        }

    }
    return Kruh();
}






