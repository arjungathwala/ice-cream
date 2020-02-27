#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <vector>
#include "IceCreamItem.h"
#include <iostream>  
#include <sstream>  

class PreMadeItem : public IceCreamItem
{
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem(){}

    double getPrice(){return price;}

    std::string composeItem()
    {
      std::stringstream ss;
      ss<<getPrice();
      std::string s;
      ss>>s;
      std::string prestr;
      prestr = "Pre-made Size: "+PreMadeItem::size+"\n";
      prestr += "Pre-made Item: "+PreMadeItem::name+"\n";
      prestr += "Price: $" + s;
      prestr += "-----\n";
      prestr += "Total: $" + s;
      return prestr;
    }

protected :
std::string name;
};

#endif