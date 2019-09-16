//Program: grid
//Author: Henryk Sosnowski
//Date: 9/15/2019
//Description: This program displays a grid, asks the user for a grid location, then prints the grid again with an 'X' in the specified cell.

#include<iostream>

//Prints a grid with an "X" in the specified cell.  Use (0, 0) for a blank grid.
void grid(int x, int y)
{
	std::cout << "\n  1 2 3 4 5 6 7 8 9\n";
	for (int height = 1; height <= 9; ++height)
	{
		std::cout << height;
		for (int length = 1; length <= 9; ++length)
		{
			if (height == y && length == x)
			{
				std::cout << " X";
			}
			else
			{
				std::cout << " .";
			}
		}
		std::cout << std::endl;
	}
}

int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;

	std::cout << "This program will mark your desired location on the grid.  Enter a negative number to exit.\n";
	grid(0, 0);

	while (true)
	{
		std::cout << "Enter a row (1-9): ";
		std::cin >> y;
		std::cout << "Enter a column (1-9): ";
		std::cin >> x;

		grid(x, y);
		if(x <=0 || y <= 0)
		{
			break;
		}
	}

	return 0;
}