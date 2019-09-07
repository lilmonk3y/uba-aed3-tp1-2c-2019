//
// Created by Christian nahuel Rivera on 23/8/19.
//

#include <vector>
#include <iostream>
#include "../entities/Item.h"
#include "../solutions/BruteForce.h"
#include "../solutions/DinamicProgrammingTopDown.h"

int main(){

    long sizeElements, capacity = 0;
    std::vector<Item> items;
    KnapSack *bruteForce = new DinamicProgrammingTopDown();

    auto start = chrono::steady_clock::now();

    bruteForce->execute(capacity, &items);

    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << endl;
    return 0;
}

