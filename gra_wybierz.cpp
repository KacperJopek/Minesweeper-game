#include "gra_wybierz.h"

void GraWybierz::odkryj() {
    while (true)
    {
        std::cout << "Wspolrzedne kursora: ("<<x<<","<<y<<")";
        int kod_klawisza = _getch();

        // Sprawdzamy, który klawisz zosta³ naciœniêty
        if (kod_klawisza == 224) // kod klawisza strza³ki
        {
            int kierunek = _getch();
            if (kierunek == 75) // strza³ka w lewo
            {
                if (x > 0) {
                    x--;
                }   
            }
            else if (kierunek == 77) // strza³ka w prawo
            {
                if (x < szerokosc-1) {
                    x++;
                }
            }
            else if (kierunek == 72) // strza³ka w górê
            {
                if (y > 0) {
                    y--;
                }
            }
            else if (kierunek == 80) // strza³ka w dó³
            {
                if (y < wysokosc - 1) {
                    y++;
                } 
            }
        }
        else if (kod_klawisza == 13) // klawisz Enter
        {
            break; // przerwanie pêtli
        }

        // Czyœcimy ekran konsoli i powtarzamy pêtlê
        
        system("cls");
        cout << "Pozostalo do odkrycia: " << szerokosc * wysokosc - ile_odkrytych - ilosc_bomb << endl;
        wyswietl();
    }

	zaznacz(x, y);
	odczytaj_x(x);
	odczytaj_y(y);
}