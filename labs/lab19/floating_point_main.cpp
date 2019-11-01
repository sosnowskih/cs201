/**
 * @file     L19_Floating_Point.cpp
 * @author   Henryk Sosnowski
 * @version  Jan 28, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
// using sin, cos
#include <cmath>

#include "floating_point.hpp"

int main() {
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	std::vector<int> v { 1, 2, 3, 4, 5 };
	for (std::size_t i = 2; i < v.size(); ++i) {
		++v[i];
		std::cout << v[i] << std::endl;
	}
	std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//        degreesToRadians(360).
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.

	std::vector<double> radians = degreesToRadians(360);

	std::cout << "degree, cos, sin" << std::endl;

	for (size_t n = 0; n < radians.size(); ++n)
	{
		std::cout << n << ", " << cos(n * M_PI /180) << ", " << sin(n * M_PI/180) << std::endl;
	}


	// *****************************************************************

	return 0;
}
