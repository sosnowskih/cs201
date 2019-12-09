#ifndef AGENT_HPP
#define AGENT_HPP

#include "thermostat.hpp"

class Agent {
public:

	//member functions
	void perceive(Environment e);


	//member data
private:
	int _target;
	int _current;

};

#endif