#include<iostream>
#include<iomanip>
int rice()
{
	unsigned long long grains = 1;
	for (int i = 1; i <= 64; i++)
	{
		std::cout.unsetf(std::ios::floatfield);
		std::cout << "Box: " << i << "\nGrains: " << grains << "\n\n";
		grains *= 2;
	}
	std::cout << "int overflows at Box 31, 1073741824 grains\n"
		<< "double gives approximate up to box 1024, 8.98847e+307";
	return grains;
}