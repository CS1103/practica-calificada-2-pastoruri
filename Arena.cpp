//
// Created by rodrigo.cespedes on 10/05/2019.
//

#include "Arena.h"

void Arena::run(Fighter a, Fighter b) {
    fights.push_back(Fight(&a, &b));
    int sc1,sc2;
    sc1=a.defense() - b.attack();
    sc2=b.defense() - a.attack();
    if(sc1>sc2){cout<<"Peleador 1 ha ganado"; fights[0].winner=&a;}
    else if(sc2>sc1){cout<<"Peleador 2 ha ganado";fights[0].winner=&b;}
    else{cout<<"Ha ocurrido un empate";}
}

vector<Fight> Arena::get_fights() {
    return vector<Fight>();
}

void Arena::load_fights(string filename) {

}

void Arena::run_all() {
for(int i=0;i<fights.size();i++){
    run(*fights[i].a, *fights[i].b);
}
}
