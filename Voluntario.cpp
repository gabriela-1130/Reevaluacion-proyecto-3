#ifndef VOLUNTARIO_H
#define VOLUNTARIO_H

#include <string>
using namespace std;

class Voluntario {
private:
    string nombre;
    int horas;

public:
    Voluntario() : nombre(""), horas(0) {}
    Voluntario(string n, int h) : nombre(n), horas(h) {}

    // Getters
    string getNombre() const { return nombre; }
    int getHoras() const { return horas; }

    // Setters
    void setNombre(string n) { nombre = n; }
    void setHoras(int h) { horas = h; }
};

#endif
