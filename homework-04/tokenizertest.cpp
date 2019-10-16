#include "tokenizer.h"
int main()
{
	std::vector<std::string> tokens;
	std::cout << "Enter text ";
	StringToTokenWS(tokens);
	std::cout << tokens[1]<<"|";
	return 0;
}
