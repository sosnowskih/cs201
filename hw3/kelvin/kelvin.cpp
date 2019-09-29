/*Program: quadratic
*Author: Henryk Sosnowski
*Date: 9/29/2019
*Description: This program converts a Celsius degree value to Kelvin.
*/

#include<iostream>

//Converts Celsius to Kelvin
double ctok(double c)
{
	//int k = c + 273.15;  int will truncate values less than 1
	double k = c + 273.15;
	//return int;  You must return a value or variable, not a type
	return k;
}

int main()
{
	double c = 0;
	//cin >> d;   c was declared, not d
	std::cin >> c;
	//double k = ctok("c");  This passes a string containing "c", not the variable c
	double k = ctok(c);
	//Cout << k << '\n';   cout is case-sensitive 
	std::cout << k << '\n';

	return 0;
}