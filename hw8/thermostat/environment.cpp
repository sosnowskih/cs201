#include "environment.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Environment::iteration() {
	if (_heater) {
		_temp += 1;
		cout << "The temperature has gone up one degree." << endl;
	}
	else {
		_temp -= 1;
		cout << "The temperature has gone down one degree." << endl;
	}
}

int Environment::getTemp() {
	return _temp;
}

void Environment::setTemp(int t) {
	_temp = t;
	cout << "The temperature is now " << t << endl;
}

void Environment::setHeater(bool h) {
	_heater = h;
}