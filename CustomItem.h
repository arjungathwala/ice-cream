#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <string>
#include <vector>

class CustomItem:public IceCreamItem {
public:
CustomItem(std::string size);
virtual ~CustomItem();
virtual std::string composeItem();
virtual double getPrice();
void addTopping(std::string topping);
private:
std::string size;
double price;
std::vector<std::pair<std::string, int>> Toppings;
};

#endif

