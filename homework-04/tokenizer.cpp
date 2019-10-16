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

unsigned StringToTokenWS(std::vector<std::string>& tokens)
{
	std::string line;
	std::string token;
	while (ReadLine(line))
	{
		std::istringstream instream(line);
		while (instream)
		{
			instream >> token;
			if (token == "end" || token == "End" || token == "END") return tokens.size();
			tokens.push_back(token+" ");
		}
	}
	return 99;
}

void AnalyseTokens(const std::vector<std::string>& tokens)
{
	std::vector<std::string>types = { "[integer]","[identifier]","[string]","[whitespace]","[unknown]" };

	for (std::string token : tokens)
	{
		
	}
}
