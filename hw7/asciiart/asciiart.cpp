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
	
	Image3 parrot(100, 100);
	parrot.loadPPM("parrot.ppm");
	parrot.printASCII(cout);
	parrot.savePPM("outputp.ppm");

	return 0;
}