//
// Created by map on 27. 9. 2021.
//
#include "kruh.h"
int Kruh::pocetKruhov=0; // nesmie to vyť v triede
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
    pocitadlo=++pocetKruhov;//dáva mu umiestenie //koľkiaty je vytvorený
    //polomer=0;

    //polomer=getInt();//aby sme odskúšali výnimky
    polomer=getInt(false);
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
    /*
    Kruh Max= pole[0];
    int max;
    for (int i=0; i<pocet;++i) {
        if(pole+i>pole+i+1){
            max=(max<pole[i])?pole[i]:max;
        }

    }
    return max;
    */
}

void Kruh::utriedPoleKruhov(Kruh *pole, int pocet) {
    std::qsort((Kruh *)pole,pocet,sizeof(Kruh),cmp);
    // pri ssort (stablesort) dobry ak potrebujeme zoradit kruhy rovnakej velkosti a to pridanim dalsej vlastnosti ktora bude rozhodovat v tom pripade
}

int Kruh::cmp(const void *a, const void *b) {
    Kruh *prvy =(Kruh *)a;  //pretypujeme pointer na void na konkretny pointer kory potrebujeme, u nas Kruh
    Kruh *druhy = (Kruh *)b;
    //->polomer, vytiahnem polomer
    return prvy->polomer-druhy->polomer; //potrebujeme aby fungovalo qsort // ak cheš triediť v opačnom poradí tak to prvy a druhy len prehod
}

Kruh::~Kruh() {

}

int Kruh::cmpStable(const void *a, const void *b) {
    Kruh *prvy =(Kruh *)a;  //pretypujeme pointer na void na konkretny pointer kory potrebujeme, u nas Kruh
    Kruh *druhy = (Kruh *)b;
    int rozdiel=prvy->polomer-druhy->polomer;
    return  (rozdiel==0)?prvy->pocitadlo-druhy->pocitadlo:rozdiel;//zabezpečujem , že ak budú dva objekty rovnaké tak utriedi podľa toho ktory je prvy vytvoreny
}

int Kruh::getInt(bool nula, bool zaporne) {
    int tmp;
    while(true){
        try {
            std::cout << "Zadaj cele cislo:";
            if (!(std::cin >> tmp))//v prípade ak by nebolo citanie uspesne t.j. nebolo zadane korektne cele cislo, !-negacia
            {
                throw Kruh::noNumber("Nebolo zadane cislo!"); // vyhodime vynimku a posleme spravu konstruktorovi
            }
            if(nula==false && tmp==0)
            {
                throw Kruh::chybaNula("Nula nie je povolena!" /*"Sprava od potomka" */);
            }
            if(zaporne==false && tmp<0)
            {
                throw Kruh::chybaZaporne("Zaporne cislo nie je povolone!");
            }
        }

        /*catch(const Kruh::noNumber & ex) //zachytime vynimku ak nebolo zadane cislo
        {
            std::cin.clear(); // vymazeme chybocy bit nastaveny v objekte cin neuspesnym citnaim
            std::cin.ignore(1000, '\n' ); //vycisti vyrovnaviaciu pamat klavesnice od zvysku zadaneho vstupu
            ex.getMsg(); // vypiseme spravu
            continue;
        }
        catch(const Kruh::chybaNula & ex)
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            ex.getMsg();
            continue;
        }
        catch(const Kruh::chybaZaporne & ex)
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            ex.getMsg();
            continue;
        }*/
        catch(const Kruh::Chyba & ex)
            //zachytime vynimku ak nebolo zadane cislo, objektu rodica sa moze priradit odkaz...
            //kompilator potom vzdy zavola spravni metodu podĺa typu odkazu a nie typu...
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n' );
            ex.getMsg();
            continue;
        }
        return tmp;
    }
}







