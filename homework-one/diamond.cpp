#include <iostream>

void diamond()//main()
{
	int rows=0;
	std::cout << "Enter a number for the diamond\n";
	std::cin >> rows;
	
	if (rows <= 0)
	{
		std::cout << "Invalid input";
		exit(0);
	}
	
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
	
	currow-=2;
	
	while (currow>0)
	{
		for (int i = currow; i < rows; i++)
		{
			std::cout << " ";
		}
		for (int i = 1; i < 2 * currow; i++)
		{
			std::cout << "#";
		}
		for (int i = currow; i < rows; i++)
		{
			std::cout << " ";
		}
		std::cout << "\n";
		currow--;
	}
}