//
// Created by Christian nahuel Rivera on 25/8/19.
//

#ifndef TP1_2C_2019_KNAPSACK_H
#define TP1_2C_2019_KNAPSACK_H

#include <vector>
#include <iostream>
#include "../entities/Item.h"

class KnapSack{
public:
    virtual long execute(long capacity, std::vector<Item> *items) = 0;
    void getInput(long *elements, long *capacity, std::vector<Item> *items);
};

#endif //TP1_2C_2019_KNAPSACK_H
