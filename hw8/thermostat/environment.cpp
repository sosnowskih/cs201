#include "environment.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Environment::iteration() {
	cout << "Inside e.iteration(): " <<_heater << endl;
	if (_heater) {
		_temp += 1;
		cout << "The temperature has gone up one degree: " << _temp << " Heater: " << _heater << endl;
	}
	else {
		_temp -= 1;
		cout << "The temperature has gone down one degree: " << _temp << " Heater: " << _heater << endl;
	}
}

int Environment::getTemp() {
	return _temp;
}

void Environment::setTemp(int te) {
	_temp = te;
	cout << "The temperature is now " << _temp << endl;
}

void Environment::setHeater(bool he) {
	_heater = he;
	cout << "Inside e.setHeater(): " << _heater << endl;
}