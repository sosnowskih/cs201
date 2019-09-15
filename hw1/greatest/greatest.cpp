//Program: greatest
//Author: Henryk Sosnowski
//Date: 9/15/2019
//Description: This program asks the user to input positive integers until they are satisfied, then prints the greatest integer they entered.

#include<iostream>

//asks for and returns user input as an integer
int getinput()
{
	int finput = 0;
	std::cout << "Enter a positive integer (0 to end): ";
	std::cin >> finput;
	return finput;
}

int main(int argc, char** argv)
{
	std::cout << "Enter a sequence of positive integers, ending with zero.\n"
			  << "I will print the greatest positive number entered.\n";

	int input = getinput();
	int greatest = input;

	//repeats input collection until a 0 is entered
	while (input != 0) 
	{
		input = getinput();
		if (input > greatest)
		{
			greatest = input;
		}
	}

	//checks for presence of positive input
	if (greatest <= 0)
	{
		std::cout << "\nNo positive integers were entered.\n";
		return 0;
	}

	std::cout << "\nThe greatest number entered: " << greatest << "\n";

	return 0;
}