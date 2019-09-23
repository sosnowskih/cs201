/*Program: rice
*Author: Henryk Sosnowski
*Date: 9/22/2019
*Description: This program calculates the number of grains of rice the inventor would be owed
			  and prints the number of squares needed for one thousand, million, and billion grains.
*/

#include<iostream>

void countRice(int goal, int& squareNumber, double& squareValue, double& totalGrains);

int main()
{
	int squareNumber = 1;
	double squareValue = 1;
	double totalGrains = 1;

	countRice(1000, squareNumber, squareValue, totalGrains);
	countRice(1000000, squareNumber, squareValue, totalGrains);
	countRice(1000000000, squareNumber, squareValue, totalGrains);

	std::cout << "31 squares can be calculated with ints, but all 64 squares can be approximated with doubles.\n";

	/*
	Calculations for variable type limit
	while (squareNumber <= 64)
	{
		std::cout << "Square " << squareNumber << ": " << totalGrains << " grains of rice\n";
		squareValue = squareValue * 2;
		totalGrains = totalGrains + squareValue;
		squareNumber++;
	}
	*/

	return 0;
}

//This starts or continues calculation of rice grains per square until the set goal
void countRice(int goal, int& squareNumber, double& squareValue, double& totalGrains)
{
	while (totalGrains < goal)
	{
		std::cout << "Square " << squareNumber << ": " << totalGrains << " grains of rice\n";
		squareValue = squareValue * 2;
		totalGrains = totalGrains + squareValue;
		squareNumber++;
	}
	std::cout << "Square " << squareNumber << ": " << totalGrains << " grains of rice\n"
		 	  << squareNumber << " squares are required for " << goal << " grains of rice.\n\n";
}