#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include<string>
#include<vector>
#include<map>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem
{
public:
    CustomItem(std::string size);
    virtual ~CustomItem(){}

    void addTopping(std::string topping);

    double getPrice(){return price;}

    std::string composeItem()
    {
      std::string custstr;
      std::vector<std::string>::iterator it = _toppings.begin();
      custstr = "Custom Size: "+CustomItem::size+"\n";
      custstr += "Toppings: "+std::to_string(_toppings.size())+" ";
      while(it != _toppings.end()){
        custstr += *it + " ";
        it++;
      }
      custstr += "\n";
      custstr += "Price: "+std::to_string(getPrice())+"\n";
      custstr += "--------------------\n";
      custstr += "Total: "+std::to_string(getPrice())+"\n";
      return custstr;
    }

protected :
std::map<std::string, int> _mtoppings;
std::vector<std::string> _toppings;
const double oz_1_topping_price = 0.40;
};

#endif