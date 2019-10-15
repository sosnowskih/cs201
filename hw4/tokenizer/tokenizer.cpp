#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include"tokenizer.hpp"

//Reads a line of input from the user and returns false if the input is an empty line
bool ReadLine(std::string& str)
{
	std::getline(std::cin, str);
	if (str.size() == 0)
	{
		return false;
	}
	return true;
}

//Counts the number of tokens in a vector of strings and returns the total
unsigned StringToTokensWS(std::vector<std::string>& tokens)
{
	std::string token;
	int total = 0;
	for (int n = 0; n < tokens.size(); ++n)
	{
		token = tokens[n];
		std::istringstream instream(token);
		if (instream)
		{
			total++;
		}
	}
	return total-1;
}


void AnalyzeTokens(const std::vector<std::string>& tokens)
{

}