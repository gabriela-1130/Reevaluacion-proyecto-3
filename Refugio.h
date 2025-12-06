#ifndef REFUGIO_H
#define REFUGIO_H

#include <iostream>
#include <string>
#include "Animal.h"
#include "Voluntario.h"
using namespace std;

class Refugio {
private:
    string nombre;

    Animal* animal1;
    Animal* animal2;

    Voluntario voluntario1;
    bool hayVoluntario;

public:
    Refugio(string n)
        : nombre(n), animal1(nullptr), animal2(nullptr),
          hayVoluntario(false) {}

    // Getters & setters
    string getNombre() const { return nombre; }
    void setNombre(string n) { nombre = n; }

    // ---- Animales ----
    void agregarAnimal(Animal* a) {
        if (animal1 == nullptr)
            animal1 = a;
        else if (animal2 == nullptr)
            animal2 = a;
        else
            cout << "Refugio lleno (solo 2 animales)." << endl;
    }

    void listarAnimales() const {
        cout << "Animales en el refugio " << nombre << ":" << endl;

        if (animal1 != nullptr)
            cout << "- " << animal1->getNombre() << endl;

        if (animal2 != nullptr)
            cout << "- " << animal2->getNombre() << endl;
    }

    // ---- Voluntario ----
    void agregarVoluntario(const Voluntario& v) {
        voluntario1 = v;
        hayVoluntario = true;
    }

    void listarVoluntarios() const {
        if (hayVoluntario)
            cout << "Voluntario: " << voluntario1.getNombre() << endl;
        else
            cout << "No hay voluntarios registrados." << endl;
    }
};

#endif
