//Program: caesar-cypher.cpp
//Author: Henryk Sosnowski
//Date: 11/24/2019
//Description: This program accepts a line from the user and an integer.  It then shifts each letter in that line by the specified 
//integer and prints the result.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;

int main() {
	cout << "Caesar Cypher" << endl;

	while (true) 
	{
		cout << "Enter a message to cypher (blank line to end): ";
		string line = "";
		string output = "";
		getline(cin, line);
		if (line.empty()) break;

		cout << "Enter an integer to use as a shift: ";
		int shift = 0;

		//Loops until a valid integer is entered
		while(true)
		{ 
			string shiftline;
			getline(cin, shiftline);
			std::istringstream instream(shiftline);
			instream >> shift;
			
			if (!instream) cout << "Error: Please enter an integer to use as a shift: ";
			if (instream) break;
		}

		//limiting shift to prevent array overflow
		shift = shift % 26;

		//Upper and lower case cyphers
		const char upper[] = "ABCDEFGHIJKLMNOPQURTUVWXYZABCDEFGHIJKLMNOPQURTUVWXYZABCDEFGHIJKLMNOPQURTUVWXYZ";
		const char lower[] = "abcdefghijklmnopqurtuvwxyzabcdefghijklmnopqurtuvwxyzabcdefghijklmnopqurtuvwxyz";

		for (auto i = 0; i < line.length(); i++)
		{
			//Check for upper case
			if ((line.at(i) >= 'A') & (line.at(i) <= 'Z'))
			{
				char c = line.at(i);
				int index = 0;
				while (c != upper[index]) index++;

				output.push_back((char)upper[index + shift + 26]);
			}
			//check for lower case
			else if ((line.at(i) >= 'a') & (line.at(i) <= 'z'))
			{
				char c = line.at(i);
				int index = 0;
				while (c != lower[index]) index++;

				output.push_back((char)lower[index + shift + 26]);
			}
			//Non-letters do not change
			else output.push_back(line.at(i));
		}

		cout << "Result: " << output << endl;
	}

	return 0;
}