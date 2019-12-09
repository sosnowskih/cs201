//Program: shopping.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description:


#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;


struct Record {
	double unitPrice;
	int units;
};


int main() {
	cout << "This program simulates a grocery store." << endl;

	map<string, Record> m;

	while (true) {
		cout << "Enter the number listed to add an item, any other key to view your cart:\n"
			<< "1. Eggs - $5\n"
			<< "2. Milk - $3\n"
			<< "3. Bread - $4\n"
			<< "4. Grapes - $2\n"
			<< "5. Salmon - $10\n" << endl;

		char input;
		cin >> input;


		


	}

	return 0;
}