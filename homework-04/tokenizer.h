#pragma once
#include <string>
#include <iostream>
#include <vector>

/**
Uses std::getline() to get a line of text from the user. 
Returns true if it read the string & false if the string was a blank line.
*/
bool ReadLine(std::string& str);

/**
Uses std::istringstream to read strings separated by whitespace characters.
Push a blank string at the end of each line. 
Returns the number of tokens read from the string.
*/
unsigned StringToTokenWS(std::vector<std::string>& tokens);

/**
prints out the type of token and the token itself surrounded by quotation marks.
*/
void AnalyseTokens(const std::vector<std::string>& tokens);
