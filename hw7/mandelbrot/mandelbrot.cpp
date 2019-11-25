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
		double x0;
		double y0;

		double x = 0.0;
		double y = 0.0;
		int iter = 0;
		int max_iter = 0;
		while (x * x + y * y <= 2 * 2 & iter > max_iter)
		{
			double xtemp = x * x - y * y + x0;
			y = 2 * x * y + y0;
			x = xtemp;
			iter++;
		}
		Color3 color(100, 0, 0);
		image.setPixel(x, y, color);
	}
}


int main()
{

	Image3 mandel(300, 300);

	//For each pixel(Px, Py) on the screen, do:
	//{
	//	x0 = scaled x coordinate of pixel(scaled to lie in the Mandelbrot X scale(-2.5, 1))
	//		y0 = scaled y coordinate of pixel(scaled to lie in the Mandelbrot Y scale(-1, 1))
	//		x = 0.0
	//		y = 0.0
	//		iteration = 0
	//		max_iteration = 1000
	//		while (x * x + y * y <= 2 * 2  AND  iteration < max_iteration) {
	//			xtemp = x * x - y * y + x0
	//				y = 2 * x * y + y0
	//				x = xtemp
	//				iteration = iteration + 1
	//		}
	//	color = palette[iteration]
	//		plot(Px, Py, color)
	//}

	return 0;
}