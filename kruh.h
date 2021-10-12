//
// Created by map on 27. 9. 2021.
//

#ifndef UNTITLED_KRUH_H
#define UNTITLED_KRUH_H
#include <iostream>
//cin, cout - objektxx ktore vznikli na zaklade triedy v iostream; misime si ich zo std prestoru zobrat = std::cin/ std::cout

// na vytvorenie objektu prvotne potrbujeme vytvoriť triedu "šablónu"
class Kruh
{
private:
    int polomer;
public:
    Kruh(); //konštruktor, len holý názov triedy + nejaké parametre
    // vypýta si polomer vznikajuceho kruhu
    Kruh(int r); // vytvorí kruh a automaticky mu dá polomer r
    //implicitný parameter Kruh(int r: 5); len vtedy ak enmá aj Kruh();
    char farba;
    //int getPolomer() const;
    int getPolomer() const {return polomer;}; // inline metoda, nahrada za getpolmer v kruh.c, max 1-2 prikazove
    void setPolomer(int r){polomer=r;}; //inline metoda
    float getObvod() const;
    float getObsah() const;

    //prezentovanie operatorov
    Kruh operator+(const Kruh &other) const;//spocituje 2 kruhy
    bool operator<(const Kruh &other) const;//zistuje ci je kruh mensi
    Kruh operator-(const Kruh &other) const;
    Kruh operator*(int cislo) const;
    Kruh operator+(int cislo) const;
    Kruh operator-(int cislo) const;
    const Kruh& operator++();
     Kruh operator++(int nepouzijem); //parameter int nepouzijem sa nikdy nepouzije ale takto bude vediet, ze sa pretazuje postfix
    const Kruh& operator--();
    Kruh operator--(int nepouzijem);
    const Kruh& operator+=(int cislo) const;
    const Kruh& operator-=(int cislo) const;


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
};
//const sa dáva pri metódach u ktorrých nechceme aby menili objekt (použij vždy, keď nechceš aby menila))
//Pri 1. spôsobeinicializácia konštanty. Nemôžeme ju urobiť vo vnútri triedy
//const float PI=3.14;

#endif //UNTITLED_KRUH_H