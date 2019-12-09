#include "agent.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Agent::setTarget(Simulator s) {
	_target = s.getTarget();
	cout << "The agent has set the target temperature." << endl;
}

void Agent::perceive(Environment e) {
	_current = e.getTemp;
	cout << "The agent has perceived the current temperature." << endl;
}

bool Agent::think() {
	if (_current < _target) _heater = true;
	else _heater = false;
	cout << "The agent has decided an action." << endl;
}

void Agent::act(Environment e) {
	e.setHeater(_heater);
	cout << "The agent has changed the environment's heater state." << endl;
}