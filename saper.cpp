#include <iostream>
#include "gra_wpisz.h"
#include "gra_wybierz.h"

int main()
{
	GraWybierz g;
	std::cout << "Start gry!" << std::endl;
	//GraWpisz g;

	g.play();

	system("pause");
	return 0;
}

