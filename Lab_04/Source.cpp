#include<iostream>
void fizz();
void fizzbuzz();

void main()
{
	std::cout << "Fizz Function\n";
	fizz();
	std::cout << "\nFizzBuzz Function\n";
	fizzbuzz();
}

void fizz()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else
		{
			std::cout << i;
		}
		std::cout << "\n";
	}
}
void fizzbuzz()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			std::cout << "Fizz";
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			std::cout << "Buzz";
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			std::cout << "Fizz Buzz";
		}
		else
		{
			std::cout << i;
		}
		std::cout << "\n";
	}
}