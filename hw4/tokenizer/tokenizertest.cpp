#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;
#include"tokenizer.hpp"


int main()
{
	cout << "Please enter a line: ";
	string str; 
	bool b = ReadLine(str);
	cout << str << " " << b;

	return 0;
}