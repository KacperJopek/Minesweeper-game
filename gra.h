#ifndef GRA_H
#define GRA_H
#include <iostream>
#include "silnik.h"

using namespace std;

class Gra : public Silnik {
public:
    Gra() {};
    ~Gra() {};
    virtual void odkryj() = 0;
    void play();
};

#endif //GRA_H
