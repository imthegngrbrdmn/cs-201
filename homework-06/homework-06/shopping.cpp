#include "shopping.h"
int shopping()
{
	std::string action;
	std::map<std::string, Record> inventory;
	inventory["apple"] = {0.75,7};
	inventory["pear"] = { 1.5,4 };
	inventory["banana"] = { 0.25,20 };
	inventory["pineapple"] = { 2.5,2 };
	inventory["orange"] = { 0.1,42 };
	double total=0;
	printInventory(inventory);
	std::cout << "You can 'see stuff', 'buy', 'leave', or 'remove item'.\n";
	while (true)
	{
		getline(std::cin,action);
		std::transform(action.begin(), action.end(), action.begin(), ::tolower);
		if (action == "see stuff")
		{
			printInventory(inventory);
		} 
		else if (action == "buy")
		{
			std::cout<<"What would you like to buy? ";
			std::string item;
			getline(std::cin, item);
			buy(item,inventory,total);
		}
		else if (action == "leave")
		{
			break;
		}
		else if (action == "remove item")
		{
			std::cout << "What would you like to remove? ";
			std::string item;
			getline(std::cin, item);
			drop(item, inventory, total);
		}
		std::cout << "Current total is " << total<<"\n";
	}
	return 0;
}
void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		std::cout << "We have " << item.second.units << " " << item.first << "s for the low price of " << item.second.unitPrice << "\n";
	}
}
void buy(std::string item, std::map<std::string, Record>& inventory, double& total)
{
	if (inventory[item].units > 0)
	{
		inventory[item].units -= 1;
		total += inventory[item].unitPrice;
	}
	else
	{
		std::cout << "We don't have more of that.";
	}
}
void drop(std::string item, std::map<std::string, Record>& inventory, double& total)
{
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}