#include "agent.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void Agent::perceive(Environment e) {
	_current = e.getTemp();
	cout << "The agent has perceived the current temperature: " << _current  << " Target: " << _target << endl;
}

void Agent::think() {
	if (_current < _target) {
		_heat = true;
		cout << "The agent decided to turn on the heater: " << _heat << endl;
	}
	else if (_current > _target) {
		_heat = false;
		cout << "The agent decided to turn off the heater: " << _heat << endl;
	}
	else cout << "The agent did not change the heater." << _heat << endl;
}

void Agent::act(Environment e) {
	e.setHeater(_heat);
	//cout << "The agent has changed the environment's heater state: " << _heat << endl;
}