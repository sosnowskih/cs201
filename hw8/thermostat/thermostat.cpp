//Program: thermostat.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description:  This program demonstrates the basics of AI using a thermostat.  
//				The agent will adjust the heater to try and reach your desired temperature.


#include "thermostat.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
Environment e;
	Agent a;
	Simulator s;

	while (true) {
		s.askOwner();
		if (s.getTarget() == 0) break;
		a.setTarget(s.getTarget());

		for (int i = 0; i < 10; i++) {
			a.perceive(e);
			a.think();
			//a.act(e);
			e.setHeater(a.getHeat());
			e.iteration();
			cout << endl;
		}
	}

	return 0;
}