//Program: tokenizertest.cpp
//Author: Henryk Sosnowski
//Date: 10/15/2019
//Description: This program accepts multiple lines of text from the user, 
//then prints each individual token along with its type.


#include<iostream>
#include<string>
#include<vector>
#include"tokenizer.hpp"


int main()
{
	std::cout << "Please type in some text.  Type \"end\", \"End\" or \"END\" to finish: ";
	std::vector<std::string> tokens;
	StringToTokensWS(tokens);

	AnalyzeTokens(tokens);

	return 0;
}