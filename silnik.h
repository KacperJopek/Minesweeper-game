#ifndef SILNIK_H
#define SILNIK_H
#include <iostream>
#include "plansza.h"
#include <cstdlib>
#include <ctime>

using namespace std;

class Silnik : public Plansza {
protected:
    int x = 0;
    int y = 0;
    int ile_odkrytych = 0;
public:
	Silnik();
	~Silnik() {};
	void wyswietl();
	void losuj();
	void zaznacz(int x,int y);
	void sprawdz(int x, int y);
	void sasiad(int x, int y);
	int IloscSasiadow(int x, int y);
	void odczytaj_x(int x) { this->x = x; }
	void odczytaj_y(int y) { this->y = y; }
	void odkryj_wszystkie();
};

#endif //SILNIK_H