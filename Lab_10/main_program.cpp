#include <iostream>
#include "header.h"

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
		{
			std::cout << i << "\n";
		}
	}
	int b;
	std::cout << "Please enter a number to print the multiples of: ";
	std::cin >> b;
	for (int i = 1; i <= 40; i++)
	{
		if (isADivB(i,b))
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}