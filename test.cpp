#include "catch.hpp"
#include <iostream>
#include "Arena.h"
#include "Fighter.h"
#include "Fight.h"


SCENARIO("La cantidad total ataques y defensas del peleador e sera 3 y La cantidad de ataques y defensas del peleador 2 sera 2,"){
GIVEN("El peleador 1 deberia ganar, pues es mas poderoso, por lo que el numero de ataques y defensas del arena.fights[0].winner debería ser igual (3)"){
    Arena a;
    a.run(JasonStanham(3,3),ChuckNorris(2,2));
    auto b=a.fights[0].winner;
REQUIRE(b->nataques==b->ndefensas);
}
}

SCENARIO("La cantidad total ataques y defensas del peleador 1 sera 3 y La cantidad de ataques y defensas del peleador 2 sera 3,"){
    GIVEN("Ninguno deberia ganar, pues son igual de poderosos, el arena.fights[0].winner debería ser un nullptr"){
        Arena a;
        a.run(JasonStanham(3,3),ChuckNorris(3,3));
        auto b=a.fights[0].winner;
        REQUIRE(b==nullptr);
    }
}

