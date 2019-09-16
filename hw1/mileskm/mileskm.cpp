//Program: mileskm
//Author: Henryk Sosnowski
//Date: 9/15/2019
//Description: This program converts a user value from miles to kilometers.

#include<iostream>
#include<iomanip>

int main(int argc, char** argv)
{
	double miles = 0;
	std::string plural = "miles";

	std::cout << "This program will convert miles to kilometers.\n"
		<< "Enter a number of miles: ";
	std::cin >> miles;

	if (miles == 1)
	{
		plural = "mile";
	}
	std::cout << miles << " " << plural << " = " << std::setprecision(5) << 1.609 * miles << " km\n";
	
 	return 0;
}