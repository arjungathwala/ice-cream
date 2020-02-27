#include "PreMadeItem.h"
#include "IceCreamItem.h"

#include <utility>
#include <iomanip>
#include <sstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size) {
this->size = size;
if (size == "small") {
price = 4.00;
} else if (size == "medium") {
price = 6.00;
} else if (size == "large") {
price = 7.50;
} else {
cout << "Invalid Size" << endl;
exit (-1);
}
}

PreMadeItem::~PreMadeItem() {};