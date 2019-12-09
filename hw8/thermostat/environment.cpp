#include "environment.hpp"

void Environment::iteration() {
	if (_heater) {
		_temp += 1;
	}
	else {
		_temp -= 1;
	}
}

int Environment::getTemp() {
	return _temp;
}

void Environment::setTemp(int t) {
	_temp = t;
}

void Environment::setHeater(bool h) {
	_heater = h;
}