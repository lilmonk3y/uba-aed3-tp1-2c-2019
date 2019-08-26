//
// Created by Christian nahuel Rivera on 23/8/19.
//

#include <vector>
#include <iostream>
#include "../entities/Item.h"
#include "../solutions/BruteForce.h"

int main(){

    long sizeElements, capacity = 0;
    std::vector<Item> items;
    KnapSack *bruteForce = new BruteForce();

    bruteForce->getInput(&sizeElements, &capacity, &items);
    std::cout << bruteForce->execute(capacity, &items);

    return 0;
}

