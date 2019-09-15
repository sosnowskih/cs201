//Program: dotcross
//Author: Henryk Sosnowski
//Date: 9/15/2019
//Description: This program asks the user for the x, y, and z values for two vectors, then calculates the dot and cross product.

#include<iostream>
#include<iomanip>

//asks and returns user a vector coordinate value while displaying the vector name and coordinate name parameters
double uinput(std::string vector, std::string coord)
{
	double input = 0;
	std::cout << "For vector " << vector << ", enter " << coord << ": ";
	std::cin >> input;
	return input;
}

int main(int argc, char** argv)
{
	double ax = 0;
	double ay = 0;
	double az = 0;
	double bx = 0;
	double by = 0;
	double bz = 0;
	double dot = 0;
	double crossx = 0;
	double crossy = 0;
	double crossz = 0;

	std::cout << "This program will calculate the dot and cross products of two vectors, A and B.\n";
	ax = uinput("A", "x");
	ay = uinput("A", "y");
	az = uinput("A", "z");
	bx = uinput("B", "x");
	by = uinput("B", "y");
	bz = uinput("B", "z");

	dot = ax * bx + ay * by + az * bz;
	crossx = ay * bz - az * by;
	crossy = az * bx - ax * bz;
	crossz = ax * by - ay * bx;

	std::cout << "\nA dot B = " << std::setprecision(5) << dot;
	std::cout << "\nA cross B = " << std::setprecision(5) << "(" << crossx << ", " << crossy << ", " << crossz << ")\n";

	return 0;
}