//Program: lab003
//Author: Henryk Sosnowski
//Date 9/9/2019
//Description: This program prints 1-20 or a 60x10 box of single or alternating characters using while loops.

#include<iostream>

//Prints 1 - specified int
void counting(int endnum)
{
	int n = 1;
	while (n <= endnum)
	{
		std::cout << n << std::endl;
		n++;
	}
}


//Prints a box based on the called width, height, and character(s)
void build_box(int width, int height, std::string block)
{
	int x = 0;
	int y = 0;

	while (y < height)
	{
		while (x < width)
		{
			std::cout << block;
			x++;
		}
		x = 0;
		std::cout << std::endl;
		y++;
	}
}

//Prints a 60x10 box of alternating characters
void alter_box()
{
	int x = 0;
	int y = 0;

	while (y < 10)
	{
		while (x < 30)
		{
			if (y%2 == 0)
			{
				std::cout << "*#";
			}
			else
			{
				std::cout << "#*";
			}
			x++;
		}
		x = 0;
		std::cout << std::endl;
		y++;
	}
}


int main()
{
	counting(20);
	std::cout << std::endl;

	build_box(60, 10, "*");
	std::cout << std::endl;

	alter_box();
	std::cout << std::endl;
	return 0;
}
