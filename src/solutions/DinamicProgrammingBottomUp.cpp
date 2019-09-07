//
// Created by Christian nahuel Rivera on 6/9/19.
//

#include "DinamicProgrammingBottomUp.h"

std::vector<std::vector<long>> *
DinamicProgrammingBottomUp::initMatrix(long capacity, unsigned long size, long initValue) {
    std::vector<std::vector<long>> *storeResults = new std::vector<std::vector<long>>();

    storeResults->push_back(std::vector<long>(capacity+1, initValue));
    storeResults->push_back(std::vector<long>(capacity+1, initValue));

    return storeResults;
}

long DinamicProgrammingBottomUp::execute(long capacity, std::vector<Item> *items) {
    std::vector<std::vector<long>> *storeResults = initMatrix(capacity, items->size(), 0);
    for(long itemIndex = 1; itemIndex <= items->size(); itemIndex ++){
        for(long capacityIndex = 0; capacityIndex <= capacity; capacityIndex++){
            long selectItemBranch = capacityIndex - items->at(itemIndex-1).getCost() < 0 ? LONG_MIN :
                    storeResults->at((itemIndex-1) %2).at(capacityIndex - items->at(itemIndex-1).getCost()) + items->at(itemIndex-1).getBenefit();
            storeResults->at(itemIndex %2).at(capacityIndex) =
                    std::max(
                            storeResults->at((itemIndex-1) %2).at(capacityIndex), selectItemBranch);
        }
    }
    return storeResults->at(items->size() %2).at(capacity);
}
