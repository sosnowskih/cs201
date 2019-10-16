//Program: fifo-lifo.cpp
//Author: Henryk Sosnowski
//Date: 10/15/2019
//Description: This program 

#include<iostream>
using std::cout;
using std::cin;
#include<vector>
#include<string>
#include"fifo-lifo.hpp"

int main()
{
	std::vector<std::string> container;
	cout << "This program will demonstrate the concepts of First in First out and Last in First out.\n";

	while (true)
	{
		cout << "Please select an option:\n"
			<<"1. First in First out\n"
			<<"2. Last in First out\n"
			<<"3. Exit\n";
		int choice = 0;
		cin >> choice;

	}

	return 0;
}