#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string nombre;
    int edad;
    string estadoSalud;

public:
    Animal(string n, int e, string s)
        : nombre(n), edad(e), estadoSalud(s) {}

    // Getters
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    string getEstadoSalud() const { return estadoSalud; }

    // Setters
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setEstadoSalud(string s) { estadoSalud = s; }

    virtual void hacerSonido() const = 0;
};

#endif
