//
// Created by rodrigo.cespedes on 10/05/2019.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H

//padre
class Attack {
public:
    int power;
    Attack(int at_intensity) ;
   ~Attack(){};
   int value(){return power;};

};
//hijas

class Punch : public Attack{
public:
    Punch() : Attack{1}{};
    Punch(int pvalor) : Attack{pvalor}{};
};

class Saber : public Attack{
public:
    Saber() : Attack{5}{};
    Saber(int svalor) : Attack{svalor}{};
};

class Firearm: public Attack{
public:
    Firearm() : Attack{10}{};
    Firearm(int fvalor) : Attack{fvalor}{};
};




#endif //PC2_ATTACK_H
