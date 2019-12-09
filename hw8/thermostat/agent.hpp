#ifndef AGENT_HPP
#define AGENT_HPP

#include "thermostat.hpp"

class Agent {
public:
	//constructor



	//member functions
	void setTarget(int t);

	void perceive(Environment e);

	bool think();


	//member data
private:
	int _target = 0;
	int _current = 0;
	bool _heater = false;

};

#endif