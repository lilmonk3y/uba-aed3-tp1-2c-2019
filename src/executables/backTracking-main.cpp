//
// Created by Christian nahuel Rivera on 25/8/19.
//

#include <vector>
#include "../entities/Item.h"
#include "../solutions/KnapSack.h"
#include "../solutions/BackTracking.h"

int main(){

    long sizeElements, capacity = 0;
    std::vector<Item> items;
    KnapSack *bruteForce = new BackTracking();

    bruteForce->getInput(&sizeElements, &capacity, &items);
    std::cout << bruteForce->execute(capacity, &items);

    return 0;
}