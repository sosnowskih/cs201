//Program: tf.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description:


#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;


int main() {
	std::ifstream fin("98.txt");

	std::map <string, int> m;


	while (true) {
		//End of file and error check
		if (!fin) {
			if (fin.eof()) {
				break;
			}
			else {
				cout << "Error reading file." << endl;
				return 0;
			}
		}

		//Reads each word as a string and converts it to lowercase
		string su, sl;
		fin >> su;
		for (auto i = 0; i < su.size(); i++) {
			string sc(1, std::tolower(su[i]));
			sl.append(sc);
		}

		//Adds the word to the map or adds 1 to the value if it already exists
		auto key_count = m.count(sl);
		if (key_count == 0) {
			m[sl] = 1;
		}
		else {
			m[sl] += 1;
		}

		//Creates a vector of the word counts
		vector<int> counts;
		for (const auto &p : m) {
			counts.push_back(p.second);
		}

		//Sorts the vector in order of word count
		std::sort(counts.begin(), counts.end());

		//Uses the twenty highest counts of the vector to find the words in the map and prints them


	}


	return 0;
}