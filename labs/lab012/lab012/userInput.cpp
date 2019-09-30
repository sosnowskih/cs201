//Program: lab011
//Author: Henryk Sosnowski
//Date: 9/30/2019
//Description:  

#include<iostream>
#include<vector>
#include<string>
#include"userInput.hpp"

void getUserStrings(std::vector<std::string>& words)
{
	std::cout << "Enter a series of strings (end to quit): ";
	for (;;)
	{
		std::string input;
		std::cin >> input;

		if (input == "end")
		{
			break;
		}
		else
		{
			words.push_back(input);
		}
	}
}