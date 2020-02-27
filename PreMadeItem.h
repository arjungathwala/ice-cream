#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include<vector>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem
{
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem(){}

    double getPrice(){return price;}

    std::string composeItem()
    {
      std::string prestr;
      prestr = "Pre-made Size: "+PreMadeItem::size+"\n";
      prestr += "Pre-made Item: "+PreMadeItem::name+"\n";
      prestr += "Price: $"+std::to_string(getPrice())+"\n";
      prestr += "-----\n";
      prestr += "Total: $"+std::to_string(getPrice())+"\n";
      return prestr;
    }

protected :
std::string name;
};

#endif