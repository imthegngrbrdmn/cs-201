#include "truncstruct.hpp"
#include <iostream>
#include <string>
int main()
{
	std::string str;
	StringInfo strinfo;
	std::cout << "Please input a string of text ";
	std::cin >> /*str;//*/strinfo.str;
	std::cout << "Please input a length ";
	std::cin >> strinfo.len;
	std::cout << trunc(strinfo).str;
	//*/std::cout << trunc8(str).str;
	return 0;
}