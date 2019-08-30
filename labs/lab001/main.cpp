//Program: Hello, World
//Auther: Henryk Sosnowski
//Date: 8/30/2019
//Description: This program demonstrates basic C++ principles...
//
//

#include<iostream>

int main(int argc, char** argv)
{
	std::cout << "Hello, world!\n";
	std::cout << "New line.\n";

	int a = 67;
	int b = 32;
	int c = a * b;

	std::cout << "a * b = " 
			  << a << " * " << b << " = " << c 
			  << ".\n";
	return 0;
}