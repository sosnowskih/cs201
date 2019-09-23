//Program: modifyString
//Author: Henryk Sosnowski
//Date: 9/23/2019
//Description: 

#include<iostream>
#include"modifyString.hpp"

int main()
{
	std::string stringInMain = "Hello";
	std::cout << "length: " << modifyString(stringInMain, 0) << std::endl;
	std::cout << "stringInMain: " << stringInMain << std::endl;

	std::cout << "length: " << modifyString(stringInMain, 123) << std::endl;
	std::cout << "stringInMain: " << stringInMain << std::endl;

	std::cout << "length: " << modifyString(stringInMain, 0456) << std::endl;
	std::cout << "stringInMain: " << stringInMain << std::endl;

	return 0;
}