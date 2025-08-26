#ifndef PLANSZA_H
#define PLANSZA_H
#include <fstream>
#include "pole.h"


using namespace std;

class Plansza {
protected:
	Pole** pola;
	int wysokosc;
	int szerokosc;
	int ilosc_bomb;
public:
	Plansza();
	~Plansza();
};

#endif //PLANSZA_H