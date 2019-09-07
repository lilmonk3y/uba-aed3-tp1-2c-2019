//
// Created by Christian nahuel Rivera on 23/8/19.
//

#include "Item.h"

long Item::getCost() const {
    return size;
}

void Item::setSize(long size) {
    Item::size = size;
}

long Item::getBenefit() const {
    return benefit;
}

void Item::setBenefit(long benefit) {
    Item::benefit = benefit;
}

Item::Item(long size, long benefit) {
    this->size = size;
    this->benefit = benefit;
}
