#ifndef ADOPCION_H
#define ADOPCION_H

#include <string>
#include "Animal.h"

class Adopcion {
private:
    string adoptante;
    Animal* animal;

public:
    Adopcion(string a, Animal* an)
        : adoptante(a), animal(an) {}

    // Getters
    string getAdoptante() const { return adoptante; }
    Animal* getAnimal() const { return animal; }

    void registrarAdopcion() {
        cout << "El adoptante " << adoptante
             << " adoptó a " << animal->getNombre() << "." << endl;
    }
};

#endif
