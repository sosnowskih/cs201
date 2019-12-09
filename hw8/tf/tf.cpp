//Program: tf.cpp
//Author: Henryk Sosnowski
//Date: 12/8/2019
//Description:  This program counts the usage of every word in A Tale of Two Cities and prints the top twenty, omitting some uninteresting ones.


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
using std::map;


//Removes keys of words on the stop-words list
void stopWords( map<string, int> & m) {
	m.erase("a");
	m.erase("and");
	m.erase("or");
	m.erase("to");
	m.erase("the");
	m.erase("of");
	m.erase("in");
	m.erase("as");
	m.erase("at");
	m.erase("on");
	m.erase("is");
	m.erase("be");
	m.erase("not");
	m.erase("that");
	m.erase("his");
	m.erase("he");
	m.erase("her");
	m.erase("from");
	m.erase("but");
}

//Searches for a key by its value
string searchKey(int value, map<string, int> m) {
	string key;
	for (auto i : m) {
		if (i.second == value) {
			key = i.first;
			break;
		}
	}
	return key;
}


int main() {
	std::ifstream fin("98.txt");

	map <string, int> m;


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

	}

	//Filters the stop-words
	stopWords(m);

	//Creates a vector of the word counts
	vector<int> counts;
	for (auto i: m) {
		counts.push_back(i.second);
	}

	//Sorts the vector in order of word count
	std::sort(counts.begin(), counts.end(), [](int a, int b) {
		return a > b; 
		});

	//Uses the twenty highest counts of the vector to find the words in the map and prints them
	cout << "The twenty most used words in 'A tale of Two Cities' are:" << endl;
	for (int i = 0; i < 20; i++) {
		cout << i + 1 << ". " << searchKey(counts[i], m) << " (" << counts[i] << ")" << endl;
	}

	return 0;
}