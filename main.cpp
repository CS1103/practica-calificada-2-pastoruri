#include <iostream>
#include "Arena.h"
#include "Fighter.h"
#include "Fight.h"

int main() {
//me falta hacer la prueba, pero estoy creando una arena y corriendo una pelea con
//dos peleadores, el segundo es mas debil como se obserba en el constructor, por lo que
//el peleador 1 deberia ser el ganador.
    Arena a;
    a.run(JasonStanham(3,3),ChuckNorris(2,2));

}