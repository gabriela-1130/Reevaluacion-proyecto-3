#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

class Perro : public Animal {
private:
    string raza;

public:
    Perro(string n, int e, string salud, string r)
        : Animal(n, e, salud), raza(r) {}

    string getRaza() const { return raza; }
    void setRaza(string r) { raza = r; }

    void hacerSonido() const override {
        cout << nombre << " dice: Guau guau!" << endl;
    }
};

#endif
