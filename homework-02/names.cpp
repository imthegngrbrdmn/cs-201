#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
void inputNames(std::vector<std::string> &names);
int main(int argc, char** argv)
{
	std::vector<std::string> names;
	inputNames(names);
	return 0;
}
void inputNames(std::vector<std::string> &names)
{
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}