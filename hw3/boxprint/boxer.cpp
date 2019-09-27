#include<iostream>
#include"boxer.hpp"

void boxer(std::string line, int size)
{
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < line.length() + size * 2 + 2; x++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < size; x++)
		{
			std::cout << "*";
		}
		std::cout << " " << line << " ";
		for (int x = 0; x < size; x++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < line.length() + size * 2 + 2; x++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}