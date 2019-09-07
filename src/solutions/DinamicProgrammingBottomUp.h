//
// Created by Christian nahuel Rivera on 6/9/19.
//

#ifndef TP1_2C_2019_DINAMICPROGRAMMINGBOTTOMUP_H
#define TP1_2C_2019_DINAMICPROGRAMMINGBOTTOMUP_H


#include "KnapSack.h"

class DinamicProgrammingBottomUp : public KnapSack {
public:
    long execute(long capacity, std::vector<Item> *items) override;

    std::vector<std::vector<long>> *initMatrix(long capacity, unsigned long size, long initValue);
};


#endif //TP1_2C_2019_DINAMICPROGRAMMINGBOTTOMUP_H
