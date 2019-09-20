#include "lab8.hpp"
#include <iostream>
#include "intio.hpp"
#include <vector>
int doInput()
{
	return getInt();
}
int compute(int n)
{
	if (n < 0)
	{
		return 0;
	}
	else
	{
		int divisors = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				divisors++;
			}
		}
		return divisors;
	}
}