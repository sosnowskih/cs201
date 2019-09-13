//Program: lab005
//Author: Henryk Sosnowski
//Date: 9/13/2019
//Description: This program asks the user to input the size of a diamond, then prints it to the console.

#include<iostream>

void switcho()
{
	int input = 0;

	int repeat = 1;
	while (repeat == 1)
	{
		std::cout << "Enter a number to select an option: \n"
			<< "1. Asleep\n"
			<< "2. Awake\n"
			<< "3. Nonplussed\n"
			<< "4. Exit\n";
		std::cin >> input;
		std::cout << std::endl;

		switch (input)
		{
		case 1:
			std::cout << "UwU\n\n";
			break;
		case 2:
			std::cout << "OwO\n\n";
			break;
		case 3:
			std::cout << "`-`\n\n";
			break;
		case 4:
			repeat = 0;
			break;
		default:
			std::cout << "That's not an option!\n\n";
			break;
		}
	}

	std::cout << std::endl;
}

void switchif()
{
	int input = 0;

	int repeat = 1;
	while (repeat == 1)
	{
		std::cout << "Enter a number to select an option: \n"
			<< "1. Asleep\n"
			<< "2. Awake\n"
			<< "3. Nonplussed\n"
			<< "4. Exit\n";
		std::cin >> input;
		std::cout << std::endl;

		if (input == 1)
		{
			std::cout << "UwU\n\n";
		}
		else if (input == 2)
		{
			std::cout << "OwO\n\n";
		}
		else if (input == 3)
		{
			std::cout << "`-`\n\n";
		}
		else if (input == 4)
		{
			repeat = 0;
		}
		else
		{
			std::cout << "That's not an option!\n\n";
		}
	}

	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	switchif();
	return 0;
}