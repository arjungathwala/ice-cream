//CustomItem.cpp
#include<iostream>
#include"CustomItem.h"

CustomItem::CustomItem(std::string size):IceCreamItem(size)
{
if(size == "small"){
    price = 3.00;
}else if(size == "medium"){
    price = 5.00;
}else if(size == "large"){
    price = 6.50;
}
}

void CustomItem::addTopping(std::string topping)
{
std::map<std::string,int>::iterator it = _mtoppings.find(topping);
_toppings.push_back(topping);
if(it != _mtoppings.end())
    _mtoppings.insert(std::pair<std::string,int>(topping,it->second+1));
else
    _mtoppings.insert(std::pair<std::string,int>(topping,1));
price += oz_1_topping_price; //increase price by topping oz 1
}