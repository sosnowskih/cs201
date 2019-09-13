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