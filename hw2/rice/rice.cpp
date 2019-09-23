/*Program: rice
*Author: Henryk Sosnowski
*Date: 9/22/2019
*Description: 
*/

#include<iostream>
#include<vector>

void countRice(int goal, int& squareNumber, int& squareValue, int& totalGrains);

int main()
{
	int squareNumber = 1;
	int squareValue = 1;
	int totalGrains = 1;

	countRice(1000, squareNumber, squareValue, totalGrains);
	countRice(1000000, squareNumber, squareValue, totalGrains);
	countRice(1000000000, squareNumber, squareValue, totalGrains);

	return 0;
}


void countRice(int goal, int& squareNumber, int& squareValue, int& totalGrains)
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