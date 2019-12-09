#ifndef AGENT_HPP
#define AGENT_HPP

#include "environment.hpp"
#include "simulator.hpp"

class Agent {
public:
	//constructors
	Agent() : _target{ 0 }, _current{ 0 }, _heat{ false } {}

	Agent(int t) : _target{ t }, _current{ 0 }, _heat{ false } {}


	//member functions
	void perceive(Environment e);

	void think();

	void act(Environment e);

	void setTarget(int t);

	bool getHeat();

	//member data
private:
	int _target;
	int _current;
	bool _heat;

};

#endif