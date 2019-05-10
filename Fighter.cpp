//
// Created by rodrigo.cespedes on 10/05/2019.
//

#include "Fighter.h"

int Fighter::attack() {
    int aux=0;

    for(int i=0; i<ataques.size();i++){
        aux+=ataques[i].power;
    }
    return aux;
}

int Fighter::defense() {
    int aux;
    for(int i=0; i<defensas.size();i++){
        aux+=defensas[i].level;
    }
    return aux;
}
