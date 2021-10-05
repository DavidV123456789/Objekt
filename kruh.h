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
    char farba;
    int getPolomer() const;
    void setPolomer(int r);
    float getObvod() const;
    float getObsah() const;
    Kruh spocitajKruhy(Kruh other) const;//takto kopírujeme a posielame celý kruh
    Kruh spocitajKruhy(const Kruh *other) const;//*other, takto dávame len odkaz na kruh
    // V c++ sa dajú preťažiť funkcie, teda môžu existovať 2 funkcie s rovnakým názvom ale sa musia líšiť v type
    // ,alebo počte parametrov. PC si vyberie podľa inputu
    //1.const (inputový kruh sa nedá zmeniť), 2.const (celkový kruh sa nedá zmeniť)
    Kruh spocitajKruhy() const; // zalozi novy kruh, vypyta si jeho polomer a spocita ho s volajucim
    //static const float PI; // 1.spôsob
    static constexpr float PI=3.14; //2.spôsob
};
//const sa dáva pri metódach u ktorrých nechceme aby menili objekt (použij vždy, keď nechceš aby menila))
//Pri 1. spôsobeinicializácia konštanty. Nemôžeme ju urobiť vo vnútri triedy
//const float PI=3.14;

#endif //UNTITLED_KRUH_H
