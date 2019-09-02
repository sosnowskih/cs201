//Program: Hello, World
//Author: Henryk Sosnowski
//Date: 9/02/2019
//Description: This program demonstrates basic understanding of C++ by printing a string to the console five times.

#include<iostream>

int main(int argc, char** argv)
{
	int n = 0;
	while (n < 5)
	{
		std::cout << "Hello, world\n";
		n++;
	}

	return 0;
}