//
// Created by map on 27. 9. 2021.
//

#ifndef UNTITLED_KRUH_H
#define UNTITLED_KRUH_H
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
//cin, cout - objektxx ktore vznikli na zaklade triedy v iostream; misime si ich zo std prestoru zobrat = std::cin/ std::cout
// iostream obsahuje triedy istream (cin) a ostream (cout)

// na vytvorenie objektu prvotne potrbujeme vytvoriť triedu "šablónu"
class Kruh
{
//výnimky: //preto lebo sú to len jednouduché objekty + ich budečme použivať len pritriede kruh

//rodicovska trieda od ktorej odvodime triedy chyb
class Chyba
{
protected:  //chraneny clen potomkovia maju k nemu pristup ako k verejnemu, ostatne triedy ako k privatnemu
    const char * msg;
    int kodChyby;
public:
    Chyba(const char *sprava):msg(sprava){};
    virtual void  getMsg()const {std::cout<<msg<<std::endl;};//virtual ak budeme ju menit v potomku
    int vratKodChyby(){return  kodChyby;};
};
//
    class noNumber:public  Chyba // trieda je verejne odvodena od triedy Chyba
        {
/*private:
    const char * msg;*/
        private:
            const char * mojaMsg;//pridaná metoda
public:
    noNumber(const char * sprava):Chyba(sprava){}; //noNumber(const char * sprava. const char * mojaSprava):Chyba(sprava){mojaMsg=mojaSprava;};; ak by nebola ta rodicovska trieda //
    //void getMsg()const{std::cout<<msg<<std::endl;};
    const char * getMojaMsg(){return mojaMsg;};
    void  getMsg()const {std::cout<<msg<<mojaMsg<<std::endl;};//prepísali sme rodičovskú správu, pri spustení sa spustí potomkova nie rodičvská
};
class chybaNula:public Chyba
{
/*private:
    const char * msg;*/
public:
    chybaNula(const char * sprava):Chyba(sprava){};
    //void getMsg()const{std::cout<<msg<<std::endl;};
};
    class chybaZaporne:public Chyba
{
/*private:
    const char * msg;*/ //bolo by tam ak by nebola materská trieda
public:
    chybaZaporne(const char * sprava):Chyba(sprava){};
    //void getMsg()const{std::cout<<msg<<std::endl;};
};

public:  class streamError:public  Chyba
    {
    public: streamError(const char *sprava): Chyba(sprava){};
    };

    //
private:
    int polomer;
    int pocitadlo;
public:
    Kruh(); //konštruktor, len holý názov triedy + nejaké parametre
    // vypýta si polomer vznikajuceho kruhu
    Kruh(int r); // vytvorí kruh a automaticky mu dá polomer r
    //explicit Kruh(int r); // explicit zakáze konverziu cisla na kruh // len pri jednom parametri
    //implicitný parameter Kruh(int r: 5); len vtedy ak enmá aj Kruh();
    char farba;
    //int getPolomer() const;
    int getPolomer() const {return polomer;}; // inline metoda, nahrada za getpolmer v kruh.c, max 1-2 prikazove
    void setPolomer(int r){polomer=r;}; //inline metoda
    float getObvod() const;
    float getObsah() const;

    ~Kruh();//destruktor
    //prezentovanie operatorov
    Kruh operator+(const Kruh &other) const;//spocituje 2 kruhy
    bool operator<(const Kruh &other) const;//zistuje ci je kruh mensi
    Kruh operator-(const Kruh &other) const;
    Kruh operator*(int cislo) const;
    friend Kruh operator*(int cislo, const Kruh & other);
    Kruh operator+(int cislo) const;//pripocita ku kruhu cislo
    friend Kruh operator+(int cislo, const Kruh & other);//pripocita k cislu kruh // priatelska funkcia, 1. parameter je cislo 2. kruh, nebude sucastou objektu ale napriek tomu bude mat pristup k privatnym premenným
    Kruh operator-(int cislo) const;
    const Kruh& operator++();
     Kruh operator++(int nepouzijem); //parameter int nepouzijem sa nikdy nepouzije ale takto bude vediet, ze sa pretazuje postfix
    const Kruh& operator--();
    Kruh operator--(int nepouzijem);
    const Kruh& operator+=(int cislo) const;
    const Kruh& operator-=(int cislo) const;
    friend std::ostream & operator<<(std::ostream& os, const Kruh &mojKruh);//pretazenie operatoru na vystup
    friend std::istream & operator>>(std::istream& is, Kruh &mojKruh);

    //koniec prez. operatorov

    Kruh spocitajKruhy(Kruh other) const;//takto kopírujeme a posielame celý kruh
    Kruh spocitajKruhy(const Kruh *other) const;//*other, takto dávame len odkaz na kruh
    // V c++ sa dajú preťažiť funkcie, teda môžu existovať 2 funkcie s rovnakým názvom ale sa musia líšiť v type
    // ,alebo počte parametrov. PC si vyberie podľa inputu
    //1.const (inputový kruh sa nedá zmeniť), 2.const (celkový kruh sa nedá zmeniť)
    Kruh spocitajKruhy() const; // zalozi novy kruh, vypyta si jeho polomer a spocita ho s volajucim
    Kruh odcitajKruhy(const Kruh *other) const;
    Kruh odcitajKruhy(const Kruh other) const;
    Kruh odcitajKruhy() const;
    bool jeMensi(const Kruh *other);//true or false // pri pointeroch dávame const aby ho nedokázal zmeniť
    //static const float PI; // 1.spôsob
    static constexpr float PI=3.14; //2.spôsob
    static void vymenKruhy(Kruh *prvy,Kruh *druhy);//1.sposob//static- spoloky pre vsetky objekty
    static void vymenKruhy(Kruh &prvy, Kruh &druhy);//2.s posov cez odkazy
    static void generujPoleKruhov(Kruh *pole, int pocet);
    static void vypispoleKruhov(const Kruh *pole, int pocet);
    static Kruh getMaxKruh(const Kruh *pole, int pocet);
    static void utriedPoleKruhov(Kruh *pole, int pocet);
    static int cmp(const void * a,const void * b);
    static int cmpStable(const void * a,const void * b);
    static int pocetKruhov;
    static int getInt(bool nula=true, bool zaporne=true );

    static int generujSuborKruhov(const char *nazov, int kolko);
    static Kruh * precitajSuborKruhov(const char *nazov, int kolko);
};

//const sa dáva pri metódach u ktorrých nechceme aby menili objekt (použij vždy, keď nechceš aby menila))
//Pri 1. spôsobeinicializácia konštanty. Nemôžeme ju urobiť vo vnútri triedy
//const float PI=3.14;

//static premenna je spolocna pre celu triedu

namespace inout
{
    using std::cout;
    using std::cin;
    using std::endl;
    // <iomanip>:
    using std::setfill; // nastvi vyplnovy znak napr. setfull('-')
    using std::setw;    //nastavi sirku vystupu napr. setw(15), treba použit pred každým výpisom
    using std::setprecision; // nastavi pocet desatinych miest napr. setprecsion(5)
    //
    using std::left;    // zarovnanie vstupu vlavo
    using std::right;   // zarovnanie vstupu vpravo
    using std::showpos; //vypisanie znamienka napr. cislo 10 vypise ako +10
    using std::noshowpos;   // nevypisovanie znamienka

}
using namespace inout; // pouzijeme manipulatory na mieste, kde to je potrebne

#endif //UNTITLED_KRUH_H