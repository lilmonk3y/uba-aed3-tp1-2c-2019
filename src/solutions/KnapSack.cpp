//
// Created by Christian nahuel Rivera on 26/8/19.
//

#include <vector>
#include "../entities/Item.h"
#include "KnapSack.h"


void KnapSack::getInput(long *elements, long *capacity, std::vector<Item> *items) {
    std::cin >> *elements;
    std::cin >> *capacity;
    int tempSize = *elements;
    long size, benefit;
    while(tempSize>0){
        std::cin >> size;
        std::cin >> benefit;
        items->push_back(Item(size, benefit));
        tempSize--;
    }
    assert(items->size() == *elements);
}
