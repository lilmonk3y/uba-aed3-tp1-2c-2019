//
// Created by Christian nahuel Rivera on 25/8/19.
//

#ifndef TP1_2C_2019_BRUTEFORCE_H
#define TP1_2C_2019_BRUTEFORCE_H

#include <vector>
#include "../entities/Item.h"
#include "KnapSack.h"

class BruteForce : public KnapSack{
public:
    BruteForce();
    ~BruteForce();
    long execute(long capacity, std::vector<Item> *items) override;

    long run(int itemIndex, long capacity, std::vector<Item> *items, long totalBenefit, long totalCost);
};

#endif //TP1_2C_2019_BRUTEFORCE_H
