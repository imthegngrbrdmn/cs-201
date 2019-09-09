#include<iostream>

void nums();
void box();
void altbox();

void main()
{
	nums();
	box();
	altbox();
}

void nums()
{
	int i = 1;
	while (i <= 20)
	{
		std::cout << i<<"\n";
		i++;
	}
}

void box()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			std::cout << "*";
		}
		std::cout<<"\n";
	}
}
void altbox()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			if ((j % 2 == 1 && i % 2 == 1) || (j % 2 == 0 && i % 2 == 0))
			{
				std::cout << "|";
			}
			else
			{
				std::cout << "*"; 
			}

		}
		std::cout << "\n";
	}
}