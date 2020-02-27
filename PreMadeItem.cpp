#include<iostream>
#include"PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size)
{
this->name = name;
if(size == "small"){
    IceCreamItem::price = 4.00;
}else if(size == "medium"){
    IceCreamItem::price = 6.00;
}else if(size == "large"){
    IceCreamItem::price = 7.50;
}
}