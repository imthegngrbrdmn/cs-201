#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);
void InputNames(std::vector<std::string>& names);
void PrintNames(const std::vector<std::string>& names);
void ZanyNames(const std::vector<std::string>& names);

int blah/*main*/(int argc, char** argv)
{
	std::string nameToFind;
	std::vector<std::string> names;
	
	InputNames(names);
	std::cout << "\nPlease enter a name to find: ";
	std::cin >> nameToFind;
	std::cout << "Name is in list: " << DoesNameExist(nameToFind, names)<<"\n";
	std::cout << "\nPrinting names: \n";
	PrintNames(names);
	std::cout << "\nPrinting names with the first half at the end: \n";
	ZanyNames(names);
	return 0;
}

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (std::string name : names)
	{
		if (name == nameToFind)
		{
			return true;
		}
	}
	return false;
}

void InputNames(std::vector<std::string>& names)
{
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

void PrintNames(const std::vector<std::string>& names)
{
	for (std::string name : names)
	{
		std::cout << name << "\n";
	}
}
void ZanyNames(const std::vector<std::string>& names)
{
	for (std::string name : names)
	{
		std::cout << name.substr(name.length()/2) << name.substr(0,name.length()/2) << "\n";
	}
}