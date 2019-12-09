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
	std::vector<string> names {"Eggs", "Milk", "Break", "Grapes", "Salmon"};

	//Main menu loop
	while (true) {
		cout << "Items for sale:\n"
			<< "1. Eggs - $5\n"
			<< "2. Milk - $3\n"
			<< "3. Bread - $4\n"
			<< "4. Grapes - $2\n"
			<< "5. Salmon - $10\n"
			<< "6. View Cart\n"
			<< "Select an option (0 to quit): ";

		int input;
		cin >> input;

		//Quit option
		if (input == 0) {
			return 0;
		}

		//Adding item option
		else if (input < 6) {
			cout << "How much would you like to add? ";
			int count;
			cin >> count;
			m[names[input]].units += count;
		}

		//Cart option
		else if (input == 6) {
			cout << "Your cart:\n";
				for (int i = 0; i < 5; i++) cout << names[i] << " x" << m[names[i]].units << "\n";
				cout << "Total: $" << 
		}
		else {
			cout << "Input error" << endl;
		}
		


	}

	return 0;
}