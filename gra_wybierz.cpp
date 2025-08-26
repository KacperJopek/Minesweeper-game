#include "gra_wybierz.h"

void GraWybierz::odkryj() {
    while (true)
    {
        std::cout << "Wspolrzedne kursora: ("<<x<<","<<y<<")";
        int kod_klawisza = _getch();

        // Sprawdzamy, kt�ry klawisz zosta� naci�ni�ty
        if (kod_klawisza == 224) // kod klawisza strza�ki
        {
            int kierunek = _getch();
            if (kierunek == 75) // strza�ka w lewo
            {
                if (x > 0) {
                    x--;
                }   
            }
            else if (kierunek == 77) // strza�ka w prawo
            {
                if (x < szerokosc-1) {
                    x++;
                }
            }
            else if (kierunek == 72) // strza�ka w g�r�
            {
                if (y > 0) {
                    y--;
                }
            }
            else if (kierunek == 80) // strza�ka w d�
            {
                if (y < wysokosc - 1) {
                    y++;
                } 
            }
        }
        else if (kod_klawisza == 13) // klawisz Enter
        {
            break; // przerwanie p�tli
        }

        // Czy�cimy ekran konsoli i powtarzamy p�tl�
        
        system("cls");
        cout << "Pozostalo do odkrycia: " << szerokosc * wysokosc - ile_odkrytych - ilosc_bomb << endl;
        wyswietl();
    }

	zaznacz(x, y);
	odczytaj_x(x);
	odczytaj_y(y);
}