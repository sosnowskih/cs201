/*Program: boxprint
*Author: Henryk Sosnowski
*Date: 9/23/2019
*Description: This program prints a box of asterisks with a border thickness and contained string input by the user.
*/

#include<iostream>
#include"boxer.hpp"

int main()
{
	std::cout << "This program will print a string inside a box.\n";

	for (;;)
	{
		int size = 1;
		std::string line;

		std::cout << "Enter a string: ";
		std::cin >> line;

		std::cout << "Enter an integer (0 to quit): ";
		std::cin >> size;

		boxer(line, size);

		if (size == 0)
		{
			break;
		}
	}

	return 0;
}