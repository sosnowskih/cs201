//Program: Hello, World
//Auther: Henryk Sosnowski
//Date: 8/30/2019
//Description: This program demonstrates basic C++ principles by printing strings to the terminal and performing basic arithmatic

#include<iostream>

int main(int argc, char** argv)
{
	std::cout << "Hello, world!\n";
	std::cout << "Now let's do some basic math:\n";

	int a = 42;
	int b = 99;
	int c = a * b;

	std::cout << "a * b = " 
			  << a << " * " << b << " = " << c 
			  << ".\n\n";

	return 0;
}