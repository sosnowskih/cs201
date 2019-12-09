#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include "thermostat.hpp"

class Simulator {
public:
	//constructor



	//member functions
	void askOwner();

	int getTarget();



	//member data
private:
	int _target = 0;

};

#endif