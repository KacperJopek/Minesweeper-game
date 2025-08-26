#include "plansza.h"
#include <iostream>

Plansza::Plansza() {
    ifstream plik;
    plik.open("dane.txt");

    plik >> szerokosc;
    plik >> wysokosc;
    plik >> ilosc_bomb;

    pola = new Pole * [wysokosc];
    for (int i = 0; i < wysokosc; i++) {
        pola[i] = new Pole[szerokosc];
    }
    plik.close();
}
Plansza::~Plansza() {
    if (pola) {
        for (int i = 0; i < wysokosc; i++) {
            delete[] pola[i];
        }
        delete[] pola;
    }
}

