#include "CustomItem.h"
#include "IceCreamItem.h"

#include <utility>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

CustomItem::CustomItem(string size): IceCreamItem(size) {}

CustomItem::~CustomItem() {};

string CustomItem::composeItem() {
string item = "Custom Size: " + IceCreamItem::composeItem() + "\n";
item += "Toppings:\n";
for (unsigned int i = 0; i < Toppings.size(); i++) {
item += (Toppings[i].first + ": " +
to_string(Toppings[i].second) + " oz\n");
}
stringstream stream;
stream << fixed << setprecision(2) << getPrice() << endl;
item += ("Price: $" + stream.str());
return item;
}



double CustomItem::getPrice() {
price = IceCreamItem::getPrice();
for (unsigned int i = 0; i < Toppings.size(); i++) {
price += .4 * Toppings[i].second;
}
return price;
}



void CustomItem::addTopping(string topping) {
if (Toppings.empty()) {
Toppings.push_back(make_pair(topping, 1));
} else {
bool done = false;
for (unsigned int i = 0; i < Toppings.size(); i++) {
if (Toppings[i].first == topping) {
Toppings[i].second += 1;
done = true;
}
} if (!done) {
Toppings.push_back(make_pair(topping, 1));
}
}
}
