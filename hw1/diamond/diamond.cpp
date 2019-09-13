//Program: diamond
//Author: Henryk Sosnowski
//Date: 9/13/2019
//Description: This program asks the user to input the size of a diamond, then prints it to the console.

#include<iostream>

int main(int argc, char** argv)
{
	int size = 0;
	bool not_integer = true;

	std::cout << "Enter the size of diamond you desire: ";
	std::cin >> size;

	
	//Checking for input error
	while (std::cin.fail()) 
	{
		std::cout << "Error: Please enter an integer only: ";
		std::cin.clear();
		std::cin >> size;
	}
	std::cout << "\n";

	//Top half of diamond
	for (int i = 0; i <= size; ++i)
	{
		for (int n = 0; n < size - i; ++n)
		{
			std::cout << " ";
		}
		for (int n = 0; n < 2 * i - 1; ++n)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	//Bottom half of diamond
	for (int i = 0; i < size - 1; ++i)
	{
		for (int n = 0; n < i + 1; ++n)
		{
			std::cout << " ";
		}
		for (int n = 0; n < 2*size - 2*(i+1) - 1; ++n)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	return 0;
}