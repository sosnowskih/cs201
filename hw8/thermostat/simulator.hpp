#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include "thermostat.hpp"

class Simulator {
public:
	//constructors
	Simulator() : _target{ 0 } {}

	Simulator(int t) : _target{ t } {}


	//member functions
	void askOwner();

	int getTarget();

	void run();

	//member data
private:
	int _target;

};

#endif