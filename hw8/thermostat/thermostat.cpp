//Program: thermostat.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description:

#include "thermostat.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	//Simulator sim;
	//sim.run();

	bool b = true;
	Agent a;
	Environment e;
	e.iteration();
	e.setHeater(b);
	e.iteration();
	a.act(e);
	e.iteration();

	return 0;
}