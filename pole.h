#ifndef POLE_H
#define POLE_H

class Pole {
protected:
	bool czy_bomba;
	bool czy_odkryte;
	int ile_bomb;
public:
	Pole() : czy_bomba(false), czy_odkryte(false), ile_bomb(0) {}
	Pole(bool bomba, bool odkryte, int ile);
	int getIleBomb() {
		return ile_bomb;
	}
	friend class Plansza;
	friend class Silnik;
	friend class Gra;
};

#endif //POLE_H