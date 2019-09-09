#include <iostream>

void main()
{
	int rows;
	std::cout << "Enter a number for the diamond\n";
	std::cin >> rows;
	int currow = 1;
	while (currow <= rows)
	{
		for (int i = currow; i < rows; i++)
		{
			std::cout << " ";
		}
		for (int i = 1; i < 2*currow; i++)
		{
			std::cout << "#";
		}
		for (int i = currow; i < rows; i++)
		{
			std::cout << " ";
		}
		std::cout << "\n";
		currow++;
	}
}