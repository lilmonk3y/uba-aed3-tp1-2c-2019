//
// Created by Christian nahuel Rivera on 30/8/19.
//

#include "DinamicProgrammingTopDown.h"

long DinamicProgrammingTopDown::execute(long capacity, std::vector<Item> *items) {
    std::vector<std::vector<long>> *storeResults = initMatrix(capacity,items->size(), LONG_MAX);
    return run(items, items->size() - 1, capacity, storeResults);
}

long DinamicProgrammingTopDown::run(std::vector<Item> *items, long itemsIndex, long capacity,
                                    std::vector<std::vector<long>> *storeResults) {
    if(capacity < 0 || itemsIndex < 0) return LONG_MIN;
    if(storeResults->at(capacity).at(itemsIndex) == LONG_MAX){
        long res;
        if(capacity == 0){
            res = 0;
        }else if(itemsIndex == 0){
            res = std::max( (capacity - items->at(itemsIndex).getCost()) < 0 ? LONG_MIN : items->at(itemsIndex).getBenefit(), 0l);
        }else{
            res = std::max(
                    run(items,itemsIndex-1,capacity, storeResults),
                    run(items,itemsIndex-1,capacity - items->at(itemsIndex).getCost(), storeResults) + items->at(itemsIndex).getBenefit());
        }
        storeResults->at(capacity).at(itemsIndex) = res;
    }
    return storeResults->at(capacity).at(itemsIndex);
}

std::vector<std::vector<long>> *
DinamicProgrammingTopDown::initMatrix(long capacity, unsigned long size, long initValue) {
    std::vector<std::vector<long>> *storeResults = new std::vector<std::vector<long>>();
    for(long capacityIndex = 0; capacityIndex <= capacity; capacityIndex++){
        storeResults->push_back(std::vector<long>(size, initValue));
    }
    assert(storeResults->size() == capacity+1);
    assert(storeResults->at(capacity).at(size-1) == initValue);
    return storeResults;
}
