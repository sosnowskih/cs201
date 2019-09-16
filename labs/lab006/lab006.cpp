//Program: lab006
//Author: Henryk Sosnowski
//Date: 9/16/2019
//Description: This program contains functions to count the number of characters in a string, display that number as #'s, and re-print the characters in reverse order.

#include<iostream>

void printStringLength(std::string userString)
{
	std::cout << "'" << userString << "' is " << userString.size() << " characters long.\n";
}

void poundLine(std::string userString)
{
	for (int n = 0; n < userString.size(); ++n)
	{
		std::cout << "#";
	}
	std::cout << std::endl;
}

void backwardsString(std::string userString)
{
	for (int n = userString.size() - 1; n >= 0; --n)
	{
		std::cout << userString[n];
	}
	std::cout << std::endl;
}

void askForString(void (*f) (std::string))
{
	while (true)
	{
		std::string inputString;

		std::cout << "Enter a string (0 to quit): ";
		std::cin >> inputString;

		if (inputString == "0")
		{
			break;
		}

		(*f)(inputString);
	}
}

int main(int argc, char** argv)
{

	askForString(poundLine);
	return 0;
}