//
// Created by rodrigo.cespedes on 10/05/2019.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <vector>
#include "Fight.h"
class Arena {
public:
    vector<Fight> fights;

    Arena()= default;
    void run(Fighter a, Fighter b);
    vector<Fight> get_fights();
    void load_fights(string filename);
    void run_all();


};


#endif //PC2_ARENA_H
