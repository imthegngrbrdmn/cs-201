#include "modifyString.h"
#include <string>
#include <iostream>
int modifyString(std::string& referencedString, int n)
{
	referencedString = referencedString + std::to_string(n%10);
	return referencedString.size();
}