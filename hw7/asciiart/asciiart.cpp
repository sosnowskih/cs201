//Program: asciiart.cpp
//Author: Henryk Sosnowski
//Date: 11/24/2019
//Description: This program opens a PPM image file, converts it to ASCII art, and prints it to the console.


#include <iostream>
#include <vector>
#include <fstream>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "This program will convert parrot.ppm to ASCII art." << endl;
	Image3 parrot(100, 100);
	parrot.loadPPM("parrot.ppm");
	parrot.printASCII(cout);

	return 0;
}