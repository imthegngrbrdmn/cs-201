#include "tokenizer.h"

bool ReadLine(std::string& str)
{
	std::getline(std::cin,str);
	if (str=="")
	{
		return false;
	}
	return true;
}

unsigned StringToTokensWS(std::vector<std::string>& tokens)
{
	istringstream instream(tokens);
	for(std::token : tokens)


