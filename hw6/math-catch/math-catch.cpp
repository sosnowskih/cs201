//Program: math-catch.cpp
//Author: Henryk Sosnowski
//Date: 11/17/2019
//Description: This program uses Catch2 to test the STL functions: sin(x), atan2(x), accumulate(b, e, i), and inner_product(b, e, b2, i).

#define _USE_MATH_DEFINES
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <math.h>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

//sin(x) test
TEST_CASE("Sins are computed", "[sin]") {
	REQUIRE(sin(0) == 0);
	REQUIRE(sin(M_PI/2) == 1);
	REQUIRE(sin(M_PI) == 0);
	REQUIRE(sin((3*M_PI)/2) == -1);
}

//atan2(x) test
TEST_CASE("Arctangents are computed", "[atan2]") {
	REQUIRE(atan2(1, 1) == M_PI/4);
	REQUIRE(atan2(-1, -1) == -3*M_PI/4);
	REQUIRE(atan2(1, 0) == M_PI/2);
	REQUIRE(atan2(0, 1) == 0);
}

//accumulate test
int initial = 10;
std::vector<int> values = { 1, 2, 3, 4, 5 };

TEST_CASE("Accumulations are computed", "[accumulate]") {
	REQUIRE(accumulate(values.begin(), values.end(), initial) == 25);
	REQUIRE(accumulate(values.begin(), values.end(), 0) == 15);
}


//inner_product test
std::vector<int> values2 = { 10, 20, 30, 40, 50 };

TEST_CASE("Inner products are computed", "[inner_product]") {
	REQUIRE(inner_product(values.begin(), values.end(), values2.begin(), initial) == 560);
	REQUIRE(inner_product(values.begin(), values.end(), values2.begin(), 100) == 650);
}

int main(int argc, char* argv[]) 
{
	std::cout << "This program will test sin, atan2, accumulate, and inner_product using Catch2." << std::endl;

	int result = Catch::Session().run(argc, argv);

	return result;
}