#include "silnik.h"

Silnik::Silnik() {
    ile_odkrytych = 0;
    losuj();
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            pola[j][i].ile_bomb=IloscSasiadow(i, j);
        }
    }
}

void Silnik::wyswietl() {
    for (int i = 0; i < wysokosc; i++) {
        if (i < 10) {
            cout << " ";
        }
        cout << i << char(176);
        for (int j = 0; j < szerokosc; j++) {
            if (pola[i][j].czy_odkryte == true) {
                if (pola[i][j].czy_bomba == true) {
                    cout << "@";
                }
                else {
                    cout << pola[i][j].ile_bomb;
                }
            }
            else {
                cout << char(178);
            }
        }
        cout << endl;
    }

    cout << " Y" << char(176);

    for (int i = 0; i < szerokosc; i++) {
        cout << char(176);
    }

    cout << endl;

    cout << "  X";


    for (int i = 0; i < szerokosc; i++) {
        cout << (int)(i / 10);
    }

    cout << endl<< "   ";

    for (int i = 0; i < szerokosc; i++) {
        cout << (int)(i % 10);
    }

    cout << endl << endl;
}

void Silnik::losuj() {
    srand(time(NULL));
    for (int i = 0; i < ilosc_bomb; i++) {
        int x, y;
        do {
            x = rand() % szerokosc;
            y = rand() % wysokosc;
        } while (pola[y][x].czy_bomba == true);
        pola[y][x].czy_bomba = true;
    }
}

void Silnik::zaznacz(int x,int y) {
    if (pola[y][x].czy_odkryte == false) {
        pola[y][x].czy_odkryte = true;
        ile_odkrytych++;
        sprawdz(x,y);
    }
}

void Silnik::sprawdz(int x, int y) {
    if (pola[y][x].czy_bomba == true) {
        cout << "BOOM!"<<endl;
    }
    else if (pola[y][x].ile_bomb == 0) {
        sasiad(x, y);
    }
}

void Silnik::sasiad(int x, int y) {

        for (int j = max(x - 1, 0); j <= min(x + 1, szerokosc - 1); j++) {
            for (int k = max(y - 1, 0); k <= min(y + 1, wysokosc - 1); k++) {
                if ((j != x) || (k != y)) {
                        zaznacz(j,k);
                }
            }
        }
}

int Silnik::IloscSasiadow(int x, int y) {
    int ilosc = 0;

    for (int j = max(y - 1, 0); j <= min(y + 1, wysokosc - 1); j++) {
        for (int k = max(x - 1, 0); k <= min(x + 1, szerokosc - 1); k++) {
            if ((k != x) || (j != y)) {
                if (pola[j][k].czy_bomba) {
                    ilosc++;
                }
            }
        }
    }
    return ilosc;
}

void Silnik::odkryj_wszystkie() {
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            if (pola[j][i].czy_odkryte == false) {
                pola[j][i].czy_odkryte = true;
            }
        }
    }
}
