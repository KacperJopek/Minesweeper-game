#ifndef GRA_WYBIERZ_H
#define GRA_WYBIERZ_H
#include <iostream>
#include "gra.h"
#include <conio.h>

using namespace std;

class GraWybierz : public Gra {
private:
	int x, y;
public:
	GraWybierz() { x = 0; y = 0; };
	~GraWybierz() {};
	void odkryj();
};

#endif //GRA_WYBIERZ_H