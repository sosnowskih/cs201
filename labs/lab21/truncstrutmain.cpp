#include<iostream>
#include<string>
#include"truncstruct.hpp"

int main() 
{
	std::string input;
	std::cout << "Enter a string: ";
	std::getline(std::cin, input);

	int inputnum;
	std::cout << "Enter an integer: ";
	std::cin >> inputnum;

	const StringInfo InputInfo{ input, inputnum };
	const StringInfo NewInfo = trunc(InputInfo);
	std::cout << "String: " << NewInfo.str << "\nLength: " << NewInfo.len;


	return 0;
}