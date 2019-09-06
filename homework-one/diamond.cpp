#include <iostream>

void main()
{
	int rows;
	std::cin >> rows;
	int currow = 0;
	int rowchars = rows * 2 + 1;
	int offset = 1;
	while (currow < rows)
	{
		currow++;
		for (int i = 0; i < rowchars / 2 - offset; i++)
		{
			std::cout << i;
		}
		for (int i = 0; i < offset; i++)
		{
			std::cout << "b";
		}
		std::cout << "\n";
	}
}