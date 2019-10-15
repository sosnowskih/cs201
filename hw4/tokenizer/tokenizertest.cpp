#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;
#include<sstream>
using std::istringstream;
#include<vector>
using std::vector;
#include"tokenizer.hpp"


int main()
{
	cout << "Please enter a line: ";
	string str; 
	bool b = ReadLine(str);
	istringstream instream(str);
	vector<string> tokens;

	while (instream)
	{
		string tokenstring;
		instream >> tokenstring;
		tokens.push_back(tokenstring);
	}

	cout << StringToTokensWS(tokens);

	return 0;
}