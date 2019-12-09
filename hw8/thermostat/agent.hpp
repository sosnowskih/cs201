#ifndef AGENT_HPP
#define AGENT_HPP

#include "thermostat.hpp"

class Agent {
public:
	//constructors
	Agent() : _target{ 0 }, _current{ 0 }, _heater{ false } {}

	Agent(bool t) : _target{ t }, _current{ 0 }, _heater{ false } {}


	//member functions
	void setTarget(Simulator s);

	void perceive(Environment e);

	bool think();

	void act(Environment e);

	//member data
private:
	int _target;
	int _current;
	bool _heater;

};

#endif