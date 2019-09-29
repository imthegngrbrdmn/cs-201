#include <iostream>
#include <string>
#include "boxer.h"

int main()
{
	std::string message;
	int layers;
	std::cout << "What would you like to say? ";
	std::cin >> message;
	std::cout << "How many layers would you like? ";
	std::cin >> layers;
	printBox(message, layers);
	return 0;
}