
#include "kruh.h"
#include <fstream> // na pracu sp subormi

using  std::cout; //importovanie cout do globalneho priestoru kde je aj main 1
using  std::cin;
using  std::endl;
using  std::ifstream; // sluzi na vstup zo suboru
using  std::ofstream; // sluzi na vystup do suboru

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
    Kruh::generujSuborKruhov("rand.txt", 50);
    Kruh *kruhy =Kruh::precitajSuborKruhov("rand.txt", 50)
            if(kruhy!=NULL)
            {
                Kruh::vypisPoleKruhov(kruhy, 50);

            }
            delete //??????????????????????????????????????,
    //cistanie to suboru
    /*ifstream fin;//vytvorime objekt pre citanie zo suboru
    fin.open("citaj.txt"); // inicializujeme objekt konkretnym suborom
    //ifstream fin("citaj.txt"); alternativny sposob otvorenia suboru pomocou konstruktoru
    ofstream fout;  //vpisanie do suboru
    fout.open("zapis.txt");
    try {
        if(!fin.is_open()) //otestujem otvorenie suboru, ak sa nepodarilo otvoriť vyhodim vynimku
        {
            throw Kruh::streamError("Nepodarilo sa otvorit súbor na citanie!");
        }
        Kruh K(0);// objekt do ktoreho budeme citat jednotlive kruhy
        if(!fout.is_open()) //otestujem otvorenie suboru na zápis, ak sa nepodarilo otvoriť vyhodim vynimku
        {
            throw Kruh::streamError("Nepodarilo sa otvorit súbor na zapis!");
        }
        while(fin>>K) // kym je citanie uspesne
        {
            cout<<K;  //vypiseme kruh na obrazovku
            fout<<K; //zapiseme kruh do suvoru
        }
        fout.close();
        fin.close(); // uzatvorime subor; musime
    }
    //otvori subor a vytvori novy subor
    catch  (const Kruh::streamError & ex)
    {
        ex.getMsg();
        return  1;
    }*/
    //
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
    /*
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
    }*/
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