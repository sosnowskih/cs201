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
	Color3 testcolor( 100, 200, 200 );
	cout << testcolor.r << " " << testcolor.weightedSum() << ": " << testcolor.asciiValue();

	Image3 parrot(100, 100);
	parrot.loadPPM("parrot.ppm");

	parrot.printASCII(cout);

	parrot.savePPM("outputp.ppm");


	return 0;
}