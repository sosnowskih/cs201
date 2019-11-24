// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course

#include <fstream>
#include "Image3.hpp"

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height) {
	// TODO: resize the pixels array
	// TODO: initialize the internal w and h members
	w = width;
	h = height;
	pixels.resize(w * w + h);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	// TODO: Add error handling for unknown pixels
	// TERRIBLE OPTION 1: throw
	// BETTER OPTION 2: return a color
	// Hint: maybe this is already in the class?

	if ((y * w + x) < pixels.size()) return pixels[0];
	else if ((y * w + x) > pixels.size()) return pixels[w*w+h];
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
		fout << i.r << " " << i.g << " " << i.b << "\n";
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

	unsigned int x, y = 1;
	while(true)
	{
		int r, g, b;
		fin >> r >> g >> b;
		setPixel(x, y, Color3(r, g, b));

		if (x == w) {
			x = 0;
			y++;
		}
		else x++;
		if (w == x & h == y) return true;
	}
}

void Image3::printASCII(std::ostream& ostr) const {
	// TODO: Print an ASCII version of this image

	for (int i = 0; i < pixels.size(); i++) {
		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				std::cout << pixels[i].asciiValue();
				i++;
			}
			std::cout << std::endl;
		}
	}
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	// TODO: Write out PPM image format to stream
	// ASSUME FORMAT WILL BE GOOD
	return ostr;
}

std::istream& operator>>(std::istream& istr, Image3& image) {
	// TODO: Read in PPM image format from stream
	// MAKE SURE FORMAT IS GOOD!!!
	return istr;
}
