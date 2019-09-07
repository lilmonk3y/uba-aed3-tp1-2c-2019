//
// Created by Christian nahuel Rivera on 25/8/19.
//

#include "BruteForce.h"

BruteForce::BruteForce() {

}

BruteForce::~BruteForce() {

}

long BruteForce::execute(long capacity, std::vector<Item> *items) {
    return run(0, capacity, items, 0,0);
}

long BruteForce::run(int itemIndex, long capacity, std::vector<Item> *items, long totalBenefit, long totalCost) {
    if(itemIndex == items->size()){
        return capacity >= totalCost ? totalBenefit : LONG_MIN;
    } else {
        long noBranch = run(itemIndex+1,capacity,items,totalBenefit, totalCost);

        long yesBranch = run(itemIndex+1,capacity,items, totalBenefit + items->at(itemIndex).getBenefit(),
                        totalCost + items->at(itemIndex).getCost());
        return std::max(noBranch, yesBranch);
    }
}