/*
	User enters a series of positive integers & program returns the greatest of these integers.
*/
#include<iostream>

int greatest() 
{
	std::cout << "Enter a sequence of positive integers, ending with zero.\nI will print the greatest positive number entered\n";
	int greatest = 0, current=0, leave=0;
	do
	{
		std::cout << "Enter a positive integer(0 to end): ";
		std::cin >> current;
		if (current > greatest)
		{
			leave = 1;
			greatest = current;
		}
		else if (leave == 0)
		{
			std::cout << "No positive integers detected";
			return current;
		}
	} while (current > 0);
	
	std::cout << greatest;
	return greatest;
}