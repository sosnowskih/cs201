#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>

std::vector<double> degreesToRadians(int degrees) {

	std::vector<double> radians;

	for (int degree = 0; degree <= degrees; ++degree) {
		radians.push_back(degrees * M_PI / 180.0);
	}

	return radians;
}