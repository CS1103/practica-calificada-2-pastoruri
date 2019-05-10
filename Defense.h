//
// Created by rodrigo.cespedes on 10/05/2019.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H


#include "Attack.h"
//padre
class Defense {
public:
int level;

    Defense(int def_intensity);
    ~Defense(){};
    int value(){return level;}
};


//hijas
class Elude :public Defense{
public:
    Elude(): Defense{1}{};
    Elude(int evalor) : Defense{evalor}{};
};

class Shield :public Defense{
public:
    Shield(): Defense{1}{};
    Shield(int shvalor) : Defense{shvalor}{};
};

class Armor :public Defense{
public:
    Armor(): Defense{1}{};
    Armor(int avalor) : Defense{avalor}{};
};



#endif //PC2_DEFENSE_H
