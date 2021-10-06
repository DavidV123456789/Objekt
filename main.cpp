
#include "kruh.h"

using  std::cout; //importovanie cout do globalneho priestoru kde je aj main 1
using  std::cin;
using  std::endl;

//using namespace srd; --- cely menny priestor .= nepotrebujeme to cele zbytocne nepouzivat;
/*
namespace  David{
    int vek;
    int getVek(){;};
}

namespace  Roman{
    int vek;
    int getVek(){;};
}
 */
int main() {

    Kruh Prvy;
    Kruh Druhy( r: 10);
    Kruh Treti = Kruh( r: 5);
    Kruh Stvrty = Kruh()
    Kruh Piaty { r: 6};
    // všetky tieto metódy vyvolania konštruktora sú správne

    auto cislo=10;
    auto realne=5.14;
    auto znak ='a';
    auto Siesty = Kruh();
    //automatické zisťovanie typu

    //Kruh poleKruhov[5];
    // Kvôli konštruktorovi: Kruh(); sa automatiky vždy spýta na jej hodnotu
    // konštruktor zaezpečuje to aby premenná mala vždy nejakú hodnotu
    /*
    Kruh Prvy;
    //vytvára sa objekt (Prvy) podľa class Kruh
    //Prvy.polomer=10 nebude fungovať lebo polomer je privátna hodnota
    Prvy.setPolomer( r: 10);
    Kruh Druhy(r: 9); // automaticky sa kvôli konštruktorovi    Kruh(int r); nastaví polomer r
    //Druhy.setPolomer( r: 5);
    Kruh Sucet=Prvy.spocitajKruhy(Druhy);
    cout<<Sucet.getPolomer()<<endl;
    Kruh Treti=Sucet.spocitajKruhy(Prvy);
    cout<<Treti.getPolomer()<<endl;//skontroluj
    Kruh Stvrty;
    Stvrty.setPolomer( r: 8);
    Kruh Piaty = Stvrty.spocitajKruhy(&Prvy);
    cout<<Piaty.getPolomer();
    Kruh Siesty = Stvrty.spocitajKruhy();
    cout<<Siesty.getPolomer();
    */

    /*
    std::cout<<"Vypisujem na obrazovku..." //pozri sa do std menneho priestoru najdi objekt cout ktorý sa vytvoril na základe iostream, umoznuje vstup na obrazovku; pretazeny
    std::cin>>cislo; // objekt ktory ma vsetko a pretazeni >> na akykolvek vstup akejkolvek premennej;
    cout<<"Uz som v globalnom priestore"<<endl; //2. ak je tam 1. endl = odriadkovanie
    cin>>cislo;
     Roman::vek;
     David::vek;
     Roman::getVek();
     David::getVek(); /deklarativne oblasti kazde zvlast
     using Roman::vek; //pouzivat teraz iba Romanov ked chcem David dat David;
     */
    return 0;
}