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
void buy(std::string item, std::map<std::string, Record>& inventory, double& total);
void drop(std::string item, std::map<std::string, Record>& inventory, double& total);