#include "simulator.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void Simulator::askOwner() {
	cout << "Please enter your desired temperature (0 to quit): ";
	cin >> _target;
}


int Simulator::getTarget() {
	return _target;
}


void Simulator::run() {
	Environment e;
	Agent a;

	while (true) {
		askOwner();
		if (_target == 0) break;
		a.setTarget(_target);

		for (int i = 0; i < 10; i++) {
			a.perceive(e);
			a.think();
			a.act(e);
			e.iteration();
			cout << endl;
		}
	}
}