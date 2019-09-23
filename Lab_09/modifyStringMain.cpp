#include "modifyString.h"
#include <string>
#include <iostream>

main(int argc, char** argv)
{
	int stringInMain = "Hello";
	std::cout << "length: " << modifyString(stringInMain, 0) << std::endl;
	std::cout << "stringInMain: " << stringInMain << std::endl;
}