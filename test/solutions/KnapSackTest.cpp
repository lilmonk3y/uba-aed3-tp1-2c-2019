//
// Created by Christian nahuel Rivera on 25/8/19.
//

#include <gtest/gtest.h>
#include "../../src/solutions/BruteForce.h"
#include "../../src/solutions/BackTracking.h"
#include "../../src/solutions/DinamicProgrammingTopDown.h"
#include "../../src/solutions/DinamicProgrammingBottomUp.h"

struct KnapSackTest : testing::Test{
    KnapSack *knapSack;

    KnapSackTest(){
        //knapSack = new BruteForce();
        //knapSack = new BackTracking();
        knapSack = new DinamicProgrammingTopDown();
        //knapSack = new DinamicProgrammingBottomUp();
    }

    ~KnapSackTest(){
        delete knapSack;
    }
};

TEST_F(KnapSackTest, test1){
    long capacity = 30;
    std::vector<Item> items;
    items.push_back(Item(10,20));

    long actualBenefit = knapSack->execute(capacity,&items);

    ASSERT_EQ(20, actualBenefit);
}

TEST_F(KnapSackTest, test2){
    long capacity = 5;
    std::vector<Item> items;
    items.push_back(Item(10,20));

    long actualBenefit = knapSack->execute(capacity,&items);

    ASSERT_EQ(0, actualBenefit);
}

TEST_F(KnapSackTest, test3){
    long capacity = 25;
    std::vector<Item> items;
    items.push_back(Item(10,5));
    items.push_back(Item(15,4));
    items.push_back(Item(5,13));
    items.push_back(Item(10,8));
    items.push_back(Item(5,8));

    long actualBenefit = knapSack->execute(capacity,&items);

    ASSERT_EQ(29, actualBenefit);
}

TEST_F(KnapSackTest, test4){
    long capacity = 25;
    std::vector<Item> items;
    items.push_back(Item(10,5));
    items.push_back(Item(15,4));
    items.push_back(Item(5,13));

    long actualBenefit = knapSack->execute(capacity,&items);

    ASSERT_EQ(18, actualBenefit);
}

TEST_F(KnapSackTest, test5){
    long capacity = 20;
    std::vector<Item> items;
    items.push_back(Item(10,5));
    items.push_back(Item(15,4));

    long actualBenefit = knapSack->execute(capacity,&items);

    ASSERT_EQ(5, actualBenefit);
}