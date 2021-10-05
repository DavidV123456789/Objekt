
#include "kruh.h"

int main() {
    Kruh poleKruhov[5];
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


    return 0;
}
