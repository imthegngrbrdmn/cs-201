#include "modifyString.h"
#include <string>
#include <iostream>

int main(int argc, char** argv)
{
	std::string stringInMain = "Hello";
	for (int i = 0; i < 0x20; i++) 
	{
		std::cout << "length: " << modifyString(stringInMain, i) << std::endl;
		std::cout << "stringInMain: " << stringInMain << std::endl;
	}
	return 0;
}