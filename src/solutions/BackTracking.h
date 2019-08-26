//
// Created by Christian nahuel Rivera on 25/8/19.
//

#ifndef TP1_2C_2019_BACKTRACKING_H
#define TP1_2C_2019_BACKTRACKING_H


#include "KnapSack.h"

class BackTracking : public KnapSack {
public:
    BackTracking();
    ~BackTracking();
    long execute(long capacity, std::vector<Item> *items) override;
    long run(int itemIndex, long capacity, std::vector<Item> *items, long totalBenefit, long totalCost);

    std::vector<long> *setUp(std::vector<Item> *items);
    bool canHaveBetterSolution(int index, long benefit);
private:
    std::vector<long> *benefitOptimization;
    long bestBenefit;

};


#endif //TP1_2C_2019_BACKTRACKING_H
