#include "gra_wpisz.h"

void GraWpisz::odkryj(){
    cout << "Podaj wspolrzedne (x,y): ";
    cin >> x;
    cin >> y;
    this->Gra::x = x;
    this->Gra::y = y;
    zaznacz(x, y);
    odczytaj_x(x);
    odczytaj_y(y);
}