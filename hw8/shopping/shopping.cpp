//Program: shopping.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description: This program simulates a grocery store by displaying a menu and letting the user add or remove items and view their cart.


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::pair;
using std::make_pair;


struct Record {
	double unitPrice;
	int units;
};


int main() {
	cout << "This program simulates a grocery store." << endl;

	map<string, Record> c;
	std::vector<pair<string, int>> items {make_pair("Eggs", 5),
			make_pair("Milk", 3),
			make_pair("Bread", 4),
			make_pair("Grapes", 2),
			make_pair("Salmon", 10)
	};

	//Main menu loop
	while (true) {
		cout << "Items for sale:\n";
		for (int i = 0; i < 5; i++) {
			cout << i + 1 << ". " << items[i].first << " - $" << items[i].second << endl;
			}
		cout  << "6. View Cart\n"
			<< "Select an option (0 to quit): ";

		int input, count;
		cin >> input;

		//Quit option
		if (input == 0) {
			return 0;
		}

		//Adding item option
		else if (input < 6) {
			cout << "How much would you like to add? ";
			cin >> count;
			c[items[input-1].first].units += count;
		}

		//Cart option
		else if (input == 6) {
			cout << "\nYour cart:\n";
			for (int i = 0; i < 5; i++) {
				if (c[items[i].first].units != 0) {
					cout << i + 1 << ". " << items[i].first << " x" << c[items[i].first].units << "\n";
				}
			}

			//Calculating total
			int total = 0;
			for (int i = 0; i < 5; i++) {
				total += c[items[i].first].units * items[i].second;
			}
			cout << "Total: $" << total << endl;

			//Cart menu options
			cout << "1. Remove an item.\n"
				<< "2. Go back.\n"
				<< "Select an option: ";
			cin >> input;
			if (input == 1) {
				cout << "Enter the number of the item you want removed: ";
				cin >> input;
				cout << "How many? ";
				cin >> count;
				c[items[input - 1].first].units -= count;
			}
		}

		else {
			cout << "Input error" << endl;
		}
		
		cout << endl;
	}

	return 0;
}