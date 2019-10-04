#include<iostream>
#include"boxer.hpp"

void boxer(std::string line, int size)
{
	//Prints the top block of the box
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < line.length() + size * 2 + 2; x++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	//First line of the center portion
	for (int x = 0; x < size; x++)
	{
		std::cout << "*";
	}
	for (int x = 0; x < line.size() + 2; x++)
	{
		std::cout << " ";
	}
	for (int x = 0; x < size; x++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;

	//Second line of the center portion, containing the string
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

	//Bottom line of the center portion
	for (int x = 0; x < size; x++)
	{
			std::cout << "*";
	}
	for (int x = 0; x < line.size() + 2; x++)
	{
		std::cout << " ";
	}
	for (int x = 0; x < size; x++)
	{
			std::cout << "*";
	}
	std::cout << std::endl;
	
	//Prints the bottom block of the box
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < line.length() + size * 2 + 2; x++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}