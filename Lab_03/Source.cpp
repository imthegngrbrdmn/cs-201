#include<iostream>

void nums();	//Prints the numbers 1 to 20, using a while-loop
void box();		//Prints a 60 × 10 box made of asterisks, using nested while-loops
void altbox();	//prints a 60 × 10 box made of alternatin asterisks & pipes, using nested while-loops

void main()		//calls the other functions
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
		std::cout << i <<"\n";
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