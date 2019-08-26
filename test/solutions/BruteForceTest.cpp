//
// Created by Christian nahuel Rivera on 25/8/19.
//

#include <gtest/gtest.h>
#include "../../src/solutions/BruteForce.h"
#include "../../src/solutions/BackTracking.h"

struct BruteForceTest : testing::Test{
    KnapSack *bruteForce;

    BruteForceTest(){
        //bruteForce = new BruteForce();
        bruteForce = new BackTracking();
    }

    ~BruteForceTest(){
        delete bruteForce;
    }
};

TEST_F(BruteForceTest, test1){
    long capacity = 30;
    std::vector<Item> items;
    items.push_back(Item(10,20));

    long actualBenefit = bruteForce->execute(capacity,&items);

    ASSERT_EQ(20, actualBenefit);
}

TEST_F(BruteForceTest, test2){
    long capacity = 5;
    std::vector<Item> items;
    items.push_back(Item(10,20));

    long actualBenefit = bruteForce->execute(capacity,&items);

    ASSERT_EQ(0, actualBenefit);
}

TEST_F(BruteForceTest, test3){
    long capacity = 25;
    std::vector<Item> items;
    items.push_back(Item(10,5));
    items.push_back(Item(15,4));
    items.push_back(Item(5,13));
    items.push_back(Item(10,8));
    items.push_back(Item(5,8));

    long actualBenefit = bruteForce->execute(capacity,&items);

    ASSERT_EQ(29, actualBenefit);
}