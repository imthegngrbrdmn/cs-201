#pragma once
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm> 

struct Record
{
	double unitPrice;
	int units;
};
void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void drop(std::map<std::string, Record>& inventory, double& total);