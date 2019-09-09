#include<iostream>
int main() 
{
	std::cout << "Enter a sequence of positive integers, ending with zero.\nI will print the greatest positive number entered\n";
	int greatest = 0, current=0;
	do
	{
		std::cout << "Enter a positive integer(0 to end): ";
		std::cin >> current;
		if (current > greatest)
		{
			greatest = current;
		}
	} while (current > 0);
	std::cout << greatest;
	return greatest;
}