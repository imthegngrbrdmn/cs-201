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
	int first = 6;
	int curr = 6;
	int i = 0;
	for (std::string token : tokens)
	{
		if (token[0] <= '9' && token[0] >= '0')
		{
			for (char c : token)
			{
				if (c >= '9' || c <= '0')
				{
					std::cout << types[5];
				}
			}
		}
		i++;
	}
}
