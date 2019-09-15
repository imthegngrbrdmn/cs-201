#include <iostream>
int main()
{
	int rows;
	std::cin>>rows;
	int columns = 2 * rows - 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout<<"0";
		}
	}
	return 0;
}