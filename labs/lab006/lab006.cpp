//Program: lab006
//Author: Henryk Sosnowski
//Date: 9/16/2019
//Description: 

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

void askForString()
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

		poundLine(inputString);
	}
}

int main(int argc, char** argv)
{
	askForString();
	return 0;
}