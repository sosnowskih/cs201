//Program: diamond
//Author: Henryk Sosnowski
//Date: 9/13/2019
//Description: This program asks the user to input the size of a diamond, then prints it to the console.

#include<iostream>

int main(int argc, char** argv)
{
	int size = 0;
	std::cout << "Please enter the size of diamond you desire: ";
	std::cin >> size;
	std::cout << "\n";

	for (int i = 0; i < size; ++i)
	{
		for (int i = 0; i < 2 * size - 1; ++i)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}
	return 0;
}