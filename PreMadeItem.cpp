#include "PreMadeItem.h"
#include "IceCreamItem.h"

#include <string>
#include <iomanip>
#include <sstream>
#include <utility>
#include <vector>

using namespace std;

PreMadeItem::PreMadeItem(string name, string size): IceCreamItem(size) {
this->name = name;
}

PreMadeItem::~PreMadeItem() {}

string PreMadeItem::composeItem() {
string item = "Pre-made Size: " + IceCreamItem::composeItem() + "\n";
item += "Pre-made Item: " + name + "\n";
stringstream stream;
stream << fixed << setprecision(2) << getPrice() << endl;
item += ("Price: $" + stream.str());
return item;
}

double PreMadeItem::getPrice() {
return IceCreamItem::getPrice() + 1;
}