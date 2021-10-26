
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
    /*
    Kruh K1( 4);
    Kruh K2( 8);
    Kruh Spocitane=K1+K2; //vdaka pretazenemu operatoru + vie ako spocitat objekty typu kruh
   // std::cout<<Spocitane.getPolomer();
    std::cout<<(K1<K2);
    //std::cout<<(K1+10).getPolomer();
    //std::cout<<(K1-10).getPolomer();
    //std::cout<<(K1*10).getPolomer();
    //std::cout<<(K1-K2).getPolomer();

    //vzhladom k tomu ze mame definiciu: //friend std::ostream & operator<<(std::ostream& os, const Kruh &mojKruh);
    std::cout<<(K1+10);
    std::cout<<(K1-10);
    std::cout<<(K1*10);
    std::cout<<(K1-K2);
    ++K1;
    // ++++K1; - ak by nebol const pred tým kruh tak by táto vec fungovala
    K2++;
    std::cout<<(10+K1).getPolomer();//nebude fungovať lebo zatial mame len operator Kruh + cislo// funguj vdaka priatelskej funkcii
    std::cout<<K1;//fungovalo by ak by si dal Kruf<<cout
    std::cin>>K2;//
    //
     //Dynamicke delenie pamate:
     int pocet;
     cout<<"Zadaj pocet prvkov pola:";
     cin>>pocet;
     Kruh *dynamickePole= new Kruh [pocet]; //alokacia pamete na hromade
     if(dynamickePole==NULL)
    {
         cout<<"Nepodarilo sa alokovat pamat. Koncim!";
         exit(2 );
    }
    delete [] dynamickePole; //uvolnenie pamate na hromade
     dynamickePole=0;
     //
     Kruh::utriedPoleKruhov(dynamickePole,pocet);
     cout<<"Povodne pole:"<<endl;
     Kruh::vypispoleKruhov(dynamickePole, pocet);
     Kruh::utriedPoleKruhov(dynamickePole,pocet);
     cout<<"Utriedene pole:"<<endl;
     Kruh::vypispoleKruhov(dynamickePole, pocet);

    */

    //Výnimky
     //výnimka musí byť vždy objekt
    int pocet;
    cout<<"Zadaj pocet prvkov pola:";
    cin>>pocet;
    Kruh *dynamickePole;
    try {
        dynamickePole = new Kruh [pocet];// alokacia pamate na hromade operatorom new
    }
    catch(std::bad_alloc & ex)
    {
        std::cout<<"Chyba prodelenia pamate";
        return 1;
    }
     //...

     /*
    const int kolko=50;
    Kruh kruhy[kolko];
    Kruh::generujPoleKruhov(kruhy, kolko);
    Kruh::vypispoleKruhov(kruhy,kolko);
     */
    /*
    //pracovanie s odkazami
    int c;
   int &odkazC = c;

   Kruh K1( r:4);
   Kruh K2( r: 8);
   Kruh::vymenKruhy( &:K1, &:K2);
   std::cout<<K1.getPolomer()<<" "<<K2.getPolomer();
   */
    /*
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
    */
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