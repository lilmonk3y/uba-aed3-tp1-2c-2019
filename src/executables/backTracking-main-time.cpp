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

    auto start = chrono::steady_clock::now();

    bruteForce->execute(capacity, &items);

    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << endl;
    return 0;
}