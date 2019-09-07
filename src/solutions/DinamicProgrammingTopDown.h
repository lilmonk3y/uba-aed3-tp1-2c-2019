//
// Created by Christian nahuel Rivera on 30/8/19.
//

#ifndef TP1_2C_2019_DINAMICPROGRAMMINGTOPDOWN_H
#define TP1_2C_2019_DINAMICPROGRAMMINGTOPDOWN_H


#include "KnapSack.h"

class DinamicProgrammingTopDown : public KnapSack {
public:
    long execute(long capacity, std::vector<Item> *items);

    long
    run(std::vector<Item> *items, long itemsIndex, long capacity, std::vector<std::vector<long>> *storeResults);

    std::vector<std::vector<long>> *initMatrix(long capacity, unsigned long size, long initValue);
};


#endif //TP1_2C_2019_DINAMICPROGRAMMINGTOPDOWN_H
