#include "simulator.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void Simulator::askOwner() {
	cout << "Please enter your desired temperature: ";
	cin >> _target;
}


int Simulator::getTarget() {
	return _target;
}