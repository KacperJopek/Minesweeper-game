#include "gra.h"

void Gra::play() {
    while (pola[y][x].czy_bomba == false && szerokosc * wysokosc - ile_odkrytych - ilosc_bomb != 0) {
        cout << "Pozostalo do odkrycia: " << szerokosc * wysokosc - ile_odkrytych - ilosc_bomb << endl;
        wyswietl();
        odkryj();  
        system("cls");
        
    }  
    
    if (szerokosc * wysokosc - ile_odkrytych - ilosc_bomb == 0) {
        cout << "  Wygrales!" << endl;
    }
    else {
        cout << " Przegrales!" << endl;
    }
    odkryj_wszystkie();
    wyswietl();
}