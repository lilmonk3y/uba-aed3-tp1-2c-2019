//
// Created by Christian nahuel Rivera on 25/8/19.
//

#include "BackTracking.h"

long BackTracking::execute(long capacity, std::vector<Item> *items) {
    std::vector<long> *benefitAcumulated = setUp(items);
    this->benefitOptimization = benefitAcumulated;
    return run(0, capacity, items, 0,0);
}

long BackTracking::run(int itemIndex, long capacity, std::vector<Item> *items, long totalBenefit, long totalCost) {
    if(itemIndex == items->size()){
        if(capacity >= totalCost) {
            if(this->bestBenefit < totalBenefit){
                this->bestBenefit = totalBenefit;
            }
            return totalBenefit;
        }
    } else {
        if(totalCost <= capacity && canHaveBetterSolution(itemIndex,totalBenefit)) {
            long noBranch = run(itemIndex + 1, capacity, items, totalBenefit, totalCost);

            long yesBranch = run(itemIndex + 1, capacity, items, totalBenefit + items->at(itemIndex).getBenefit(),
                                 totalCost + items->at(itemIndex).getCost());
            return std::max(noBranch, yesBranch);
        }
    }
    return LONG_MIN;
}

std::vector<long> *BackTracking::setUp(std::vector<Item> *items) {
    std::vector<long> *costsAcumulated  = new std::vector<long>(items->size());
    if(costsAcumulated->size() >= 1) costsAcumulated->at(items->size()-1) = items->at(items->size() -1).getBenefit();
    int index = items->size() - 2;
    while(index > -1){
        costsAcumulated->at(index) = costsAcumulated->at(index+1) + items->at(index).getBenefit();
        index--;
    }
    return costsAcumulated;
}

bool BackTracking::canHaveBetterSolution(int index, long benefit) {
    if( this->bestBenefit == -1) return true;
    return benefit + this->benefitOptimization->at(index) > this->bestBenefit;
}

BackTracking::BackTracking() {
    this->bestBenefit = -1;
}

BackTracking::~BackTracking() {
    delete this->benefitOptimization;
}
