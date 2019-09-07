//
// Created by Christian nahuel Rivera on 23/8/19.
//

#ifndef TP1_2C_2019_ITEM_H
#define TP1_2C_2019_ITEM_H


class Item {
public:
    Item(long size, long benefit);

    long getCost() const;

    void setSize(long size);

    long getBenefit() const;

    void setBenefit(long benefit);

private:
    long size;
    long benefit;

};


#endif //TP1_2C_2019_ITEM_H
