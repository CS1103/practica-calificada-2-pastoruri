//
// Created by rodrigo.cespedes on 10/05/2019.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"

class Fight {
public:
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;
    Fight(){a= nullptr;b= nullptr,winner= nullptr;};
    Fight(Fighter* aa,Fighter* bb){a=aa;b=bb; winner= nullptr;};
    ~Fight()=default;
};


#endif //PC2_FIGHT_H
