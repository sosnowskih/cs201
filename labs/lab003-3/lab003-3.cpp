//Program: lab003-3
//Author: Henryk Sosnowski
//Date 9/6/2019
//Description: This program prints a 60x10 box of alternating characters (*#) using nested while loops.

#include<iostream>

int main()
{
	int x = 0;
	int y = 0;

	while (y < 10)
	{
		while (x < 30)
		{
			std::cout << "*#";
			x++;
		}
		x = 0;
		std::cout << std::endl;
		y++;
	}
	return 0;
}