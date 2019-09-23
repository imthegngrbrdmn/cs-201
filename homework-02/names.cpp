#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
void InputNames(std::vector<std::string>& names);
bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);

int main(int argc, char** argv)
{
	std::vector<std::string> names;
	InputNames(names);
	std::cout << "Please enter a name to find: ";
	std::string nameToFind;
	std::cin >> nameToFind;
	std::cout << "Name is in list: " << DoesNameExist(nameToFind, names);
	return 0;
}
void InputNames(std::vector<std::string> &names)
{
	for (int i = 0; i < 4/*10*/; i++)//using 4 for testing
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
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