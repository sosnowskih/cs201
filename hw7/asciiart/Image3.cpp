// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course

#include <fstream>
#include <vector>
#include <string>
#include "Image3.hpp"

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height) {
	// TODO: resize the pixels array
	// TODO: initialize the internal w and h members
	w = width;
	h = height;
	pixels.resize(w * h);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	// TODO: Add error handling for unknown pixels
	// TERRIBLE OPTION 1: throw
	// BETTER OPTION 2: return a color
	// Hint: maybe this is already in the class?

	if ((y * w + x) < pixels.size()) return pixels[0];
	else if ((y * w + x) > pixels.size()) return pixels[(w*h)-1];
	else return pixels[y * w + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) {
	// TODO: Set the pixel to the new color
	pixels[y * w + x] = color;
}

bool Image3::savePPM(const std::string& path) const {
	// TODO: Save the image to the disk
	// REQUIREMENT: Use the STREAM operators for the file contents

	std::ofstream fout(path);
	if (!fout) return false;

	fout << "P3\n" << w << " " << h << "\n" << "255\n";
	for (auto i : pixels)
	{
		fout << (int)i.r << " " << (int)i.g << " " << (int)i.b << "\n";
	}
	fout << std::endl;
	return true;
}

bool Image3::loadPPM(const std::string& path) {
	// TODO: Load an image from the disk
	// REQUIREMENT: Use the STREAM operators for the file contents

	std::ifstream fin(path);
	if (!fin) return false;

	std::string type, maxColor;

	fin >> type >> w >> h >> maxColor;

	int xx = 0;
	int yy = 0;
	while(true)
	{
		int r, b, g;
		fin >> r >> b >> g;
		setPixel(xx, yy, Color3(r, b, g));

		if (xx >= w) {
			xx = 0;
			yy++;
		}
		xx++;
		if (yy == h & xx == w) return true;
	}
}

void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image
	int i = 0;
	while (i < pixels.size()) {
		for (int yy = 0; yy < h; yy++) {
			for (int xx = 0; xx < w; xx++) {
				std::cout << pixels[yy*w+xx].asciiValue();
				i++;
			}
			std::cout << std::endl;
		}
	}
}

// STREAM OPERATORS for IMAGE3 class

//std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	//ostr << 

//	return ostr;
//}

//std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
//	return istr;
//}
