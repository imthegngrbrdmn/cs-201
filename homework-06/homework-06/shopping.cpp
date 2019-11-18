#include "shopping.h"
int main()
{
	std::map<std::string, Record> inventory;
	inventory["apple"] = {0.75,7};
	inventory["pear"] = { 1.5,4 };
	inventory["banana"] = { 0.25,20 };
	inventory["pineapple"] = { 2.5,2 };
	inventory["orange"] = { 0.1,42 };
	for (auto item : inventory)
	{
		std::cout << "We have " << item.second.units << " " << item.first << "s for the low price of " << item.second.unitPrice << "\n";
	}
	return 0;
}