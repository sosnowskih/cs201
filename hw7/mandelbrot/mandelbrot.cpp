//Program: mandelbrot.cpp
//Author: Henryk Sosnowski
//Date: 11/24/2019
//Description: 

#include <iostream>
#include <vector>
#include <fstream>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::cin;
using std::endl;


void buildm(Image3& image) 
{
	for (auto i : image.pixels)
	{
		double x0 = (1. / image.w) * 3.5 + (-2.5);
		double y0 = (1. / image.h) * 2 + (-1);

		double x = 0.0;
		double y = 0.0;
		int iter = 0;
		int max_iter = 1000;
		while ((x * x + y * y <= (2 * 2)) & (iter > max_iter))
		{
			double xtemp = x * x - y * y + x0;
			y = 2 * x * y + y0;
			x = xtemp;
			iter++;
		}
		Color3 color(iter/300, 0, 200);
		image.setPixel(x, y, color);
	}
}


int main()
{

	Image3 mandel(300, 300);
	buildm(mandel);

	mandel.savePPM("mandelbrot.ppm");

	return 0;
}