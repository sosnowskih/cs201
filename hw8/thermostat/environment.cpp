#include "environment.hpp"

void Environment::iteration() {
	if (_heater) {
		_temp += 1;
	}
	else {
		_temp -= 1;
	}
}