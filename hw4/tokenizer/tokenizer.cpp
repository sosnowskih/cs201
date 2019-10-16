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
//Adds each token (including line breaks) to the referenced vector as individual elements
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
			tokens.push_back(tokenstring);
			total++;
			if (tokenstring == "end" || tokenstring == "End" || tokenstring == "END")
			{
				return total;
			}
		}
	}
}


//Prints the type and value of each token of a vector of strings
void AnalyzeTokens(const std::vector<std::string>& tokens)
{
	for (int n = 0; n < tokens.size(); ++n)
	{
		std::istringstream instream(tokens[n]);
		int integer = 0;
		std::string nonint;
		
		instream >> integer;
		if (tokens[n].empty())
		{
			std::cout << "[whitespace]     " << "\"\"" << std::endl;
		}
		else if (instream)
		{
			std::cout << "[integer]        " << "\"" << tokens[n] << "\"" << std::endl;
		}
		else {
			if (tokens[n].front() == '\"' && tokens[n].back() == '\"')
			{
				std::cout << "[string]         " << "\"\\\"" << tokens[n] << "\\\"\"" << std::endl;
			}
			else if (tokens[n].front() >= '0' && tokens[n].front() <= '9')
			{
				std::cout << "[identifier]     " << "\"" << tokens[n] << "\"" << std::endl;
			}
			else if (tokens[n].front() >= 'A' && tokens[n].front() <= 'z')
			{
				std::cout << "[identifier]     " << "\"" << tokens[n] << "\"" << std::endl;
			}
			else
			{
				std::cout << "[other]          " << "\"" << tokens[n] << "\"" << std::endl;
			}
		}
	}	
}