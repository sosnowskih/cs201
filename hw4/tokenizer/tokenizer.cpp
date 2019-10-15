#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include"tokenizer.hpp"


bool ReadLine(std::string& str)
{
	std::getline(std::cin, str);
	if (str.size() == 0)
	{
		return false;
	}
	return true;
}


unsigned StringToTokensWS(std::vector<std::string>& tokens)
{

	return 0;
}


void AnalyzeTokens(const std::vector<std::string>& tokens)
{

}