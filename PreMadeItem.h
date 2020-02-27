#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"
#include <string>
#include <vector>

class PreMadeItem:public IceCreamItem {
public:
PreMadeItem(std::string name, std::string size);
virtual ~PreMadeItem();
private:
std::string size;
std::string name;
};