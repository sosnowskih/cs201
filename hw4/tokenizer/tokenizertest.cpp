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
	vector<string> tokens;
	int total = StringToTokensWS(tokens);

	cout << total << "  ";
	for (int i = 0; i < tokens.size(); i++)
	{
		cout << tokens[i] << " ";
	}

	return 0;
}