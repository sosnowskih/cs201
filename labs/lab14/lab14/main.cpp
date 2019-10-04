#include<iostream>
#include<string>
#include"shrink.hpp"

int main()
{
	std::string input;
	std::cout << "Enter a word: ";
	std::cin >> input;

	shrink(input);

	return 0;
}