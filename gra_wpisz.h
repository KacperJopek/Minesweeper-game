#ifndef GRA_WPISZ_H
#define GRA_WPISZ_H
#include <iostream>
#include "gra.h"

using namespace std;

class GraWpisz : public Gra {
private:
	int x, y;
public:
	GraWpisz() {};
	~GraWpisz() {};
	void odkryj();
};

#endif //GRA_WPISZ_H
