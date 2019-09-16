//Program: lab006
//Author: Henryk Sosnowski
//Date: 9/16/2019
//Description: 

#include<iostream>

void printStringLength(std::string userString)
{
	std::cout << "'" << userString << "' is " << userString.size() << " characters long.\n";
}

void requiredFunction()
{
	while (true)
	{
		std::string inputString;

		std::cout << "Enter a string to get its length (0 to quit): ";
		std::cin >> inputString;

		if (inputString == "0")
		{
			break;
		}

		printStringLength(inputString);
	}
}

int main(int argc, char** argv)
{
	requiredFunction();
	return 0;
}