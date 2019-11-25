//Program: mandelbrot.cpp
//Author: Henryk Sosnowski
//Date: 11/24/2019
//Description: This program generates a Mandelbrot Set pixel by pixel and saves the result as a PPM image file.

#include <iostream>
#include <vector>
#include <fstream>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::cin;
using std::endl;

//Mendelbrot calculation
void buildm(Image3& image) 
{
	for (int j = 0; j < image.h; j++)
	{
		for (int i = 0; i < image.w; i++)
		{
			int xi = i;
			int yj = j;

			double x0 = ((double)xi / image.w) * 3.5 + (-2.5);
			double y0 = ((double)yj / image.h) * 2 + (-1);

			double x = 0.0;
			double y = 0.0;
			int iter = 0;
			int max_iter = 1000;
			while ((x * x + y * y <= 4) && (iter < max_iter))
			{
				double xtemp = x * x - y * y + x0;
				y = 2 * x * y + y0;
				x = xtemp;
				iter++;
			}
			Color3 color(iter*10, iter*5, iter*2);
			image.setPixel(xi, yj, color);
		}
	}
}


int main()
{
	Image3 mandel(400, 400);
	buildm(mandel);

	mandel.savePPM("mandelbrot.ppm");
	std::cout << "Mandelbrot saved as \"Mandelbrot.ppm\"" << std::endl;

	return 0;
}