#include"lab14.h"
void modStr(std::string str)
{
	for (int i = str.length(); i > 0; i--)
	{
		std::cout << str.substr(0, i) << "\n";
	}
}
void modStrBoth(std::string str)
{
	std::string spaceStr(" ", str.length());
	for (int i = 0; i <= (int) str.length()/2; i++)
	{
		std::cout << spaceStr.substr(0, i);
		std::cout << str.substr(i, str.length()-2*i) << "\n";
	}
}