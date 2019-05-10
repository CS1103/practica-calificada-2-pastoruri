//
// Created by rodrigo.cespedes on 10/05/2019.
//
#include<vector>
#include "Attack.h"
#include "Defense.h"
#include <iostream>
#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H
using namespace std;

class Fighter {
public:
    vector<Attack> ataques;
    vector<Defense> defensas;

    Fighter()=default;
    int attack();
    int defense();
};

class BruceLee: public Fighter{
    int nataques;
    int ndefensas;
public:
    BruceLee(): Fighter{}{};
    BruceLee(int n_ataques, int n_defensas): Fighter{}{
        nataques=n_ataques;
        ndefensas=n_defensas;
        //ataques
        if(n_ataques==0){cout<<"No se han equipado ataques"<<endl;}
        else if(n_ataques==1){
            Punch p;
            ataques.push_back(p);
        }
        else if(n_ataques==2){
            Punch p;
            Saber s;
            ataques.push_back(p);
            ataques.push_back(s);
        }
        else if(n_ataques==3){
            Punch p;
            Saber s;
            Firearm f;
            ataques.push_back(p);
            ataques.push_back(s);
            ataques.push_back(f);
        }
        //defensas
        if(n_defensas==0){cout<<"No se han equipado defensas"<<endl;}
        else if(n_defensas==1){
            Elude e;
           defensas.push_back(e);
        }
        else if(n_defensas==2){

            Elude e;
            Shield sh;
            defensas.push_back(e);
            defensas.push_back(sh);
        }
        else if(n_defensas==3) {
            Elude e;
            Shield sh;
            Armor a;
            defensas.push_back(e);
            defensas.push_back(sh);
            defensas.push_back(a);
        }

    };


};

class ChuckNorris: public Fighter{
    int nataques;
    int ndefensas;
public:
    ChuckNorris() : Fighter{}{};
    ChuckNorris(int n_ataques, int n_defensas): Fighter{}{
        nataques=n_ataques;
        ndefensas=n_defensas;
        //ataques
        if(n_ataques==0){cout<<"No se han equipado ataques"<<endl;}
        else if(n_ataques==1){
            Punch p;
            ataques.push_back(p);
        }
        else if(n_ataques==2){
            Punch p;
            Saber s;
            ataques.push_back(p);
            ataques.push_back(s);
        }
        else if(n_ataques==3){
            Punch p;
            Saber s;
            Firearm f;
            ataques.push_back(p);
            ataques.push_back(s);
            ataques.push_back(f);
        }
        //defensas
        if(n_defensas==0){cout<<"No se han equipado defensas"<<endl;}
        else if(n_defensas==1){
            Elude e;
            defensas.push_back(e);
        }
        else if(n_defensas==2){

            Elude e;
            Shield sh;
            defensas.push_back(e);
            defensas.push_back(sh);
        }
        else if(n_defensas==3) {
            Elude e;
            Shield sh;
            Armor a;
            defensas.push_back(e);
            defensas.push_back(sh);
            defensas.push_back(a);
        }

    };


};

class JasonStanham: public Fighter{
    int nataques;
    int ndefensas;
public:
    JasonStanham():Fighter{}{};
    JasonStanham(int n_ataques, int n_defensas): Fighter{}{
        nataques=n_ataques;
        ndefensas=n_defensas;
        //ataques
        if(n_ataques==0){cout<<"No se han equipado ataques"<<endl;}
        else if(n_ataques==1){
            Punch p;
            ataques.push_back(p);
        }
        else if(n_ataques==2){
            Punch p;
            Saber s;
            ataques.push_back(p);
            ataques.push_back(s);
        }
        else if(n_ataques==3){
            Punch p;
            Saber s;
            Firearm f;
            ataques.push_back(p);
            ataques.push_back(s);
            ataques.push_back(f);
        }
        //defensas
        if(n_defensas==0){cout<<"No se han equipado defensas"<<endl;}
        else if(n_defensas==1){
            Elude e;
            defensas.push_back(e);
        }
        else if(n_defensas==2){

            Elude e;
            Shield sh;
            defensas.push_back(e);
            defensas.push_back(sh);
        }
        else if(n_defensas==3) {
            Elude e;
            Shield sh;
            Armor a;
            defensas.push_back(e);
            defensas.push_back(sh);
            defensas.push_back(a);
        }

    };


};


#endif //PC2_FIGHTER_H
