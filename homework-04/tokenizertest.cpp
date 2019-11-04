#include "tokenizer.h"
int main()
{
	std::vector<std::string> tokens;
	std::cout << "Enter text ";
	StringToTokenWS(tokens);
	AnalyseTokens(tokens);
	return 0;
}
