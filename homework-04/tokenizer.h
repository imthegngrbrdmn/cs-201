#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
bool ReadLine(std::string& str);
unsigned StringToTokenWS(std::vector<std::string>& tokens);
void AnalyseTokens(const std::vector<std::string>& tokens);