#include "agent.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Agent::setTarget(int t) {
	_target = t;
}

void Agent::perceive(Environment e) {
	_current = e.getTemp;
}

bool Agent::think() {
	if (_current < _target) _heater = true;
	else _heater = false;
}