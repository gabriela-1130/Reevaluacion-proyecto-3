#include <iostream>
using namespace std;

#include "Perro.h"
#include "Gato.h"
#include "Voluntario.h"
#include "Adopcion.h"
#include "Refugio.h"

int main() {

    Perro p1("Firulais", 3, "Sano", "Labrador");
    Gato g1("Michi", 2, "Herido", true);
    Voluntario v1("Carlos", 12);

    Refugio r1("Refugio Patitas");

    r1.agregarAnimal(&p1);
    r1.agregarAnimal(&g1);

    r1.agregarVoluntario(v1);

    r1.listarAnimales();
    r1.listarVoluntarios();

    Adopcion a1("Ana", &p1);
    a1.registrarAdopcion();

    return 0;
}
