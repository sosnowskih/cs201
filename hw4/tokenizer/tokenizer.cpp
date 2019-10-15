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

//Accepts multiple lines of input until the user types end, End, or END 
//and returns the total number of tokens.
unsigned StringToTokensWS(std::vector<std::string>& tokens)
{
	int total = 0;
	while (true) {
		std::string str;
		bool b = ReadLine(str);
		std::istringstream instream(str);

		while (instream)
		{
			std::string tokenstring;
			instream >> tokenstring;
			if (tokenstring == "end" || tokenstring == "End" || tokenstring == "END")
			{
				return total - 1;
			}
			tokens.push_back(tokenstring);
			total++;
		}
	}
}


void AnalyzeTokens(const std::vector<std::string>& tokens)
{
	for (int n = 0; n < tokens.size(); ++n)
	{

	}	
}