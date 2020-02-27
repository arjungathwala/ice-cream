#include "IceCreamItem.h"

#include <string>
#include <iostream>
using namespace std;


IceCreamItem::IceCreamItem(string size) {
this->size = size;
if (size == "small") {
price = 3.00;
} else if (size == "medium") {
price = 5.00;
} else if (size == "large") {
price = 6.50;
} else {
cout << "Invalid Size" << endl;
exit (-1);
}
}


string IceCreamItem::composeItem() {
return size;
}

double IceCreamItem::getPrice() {
return price;
}