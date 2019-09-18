//Program: lab007
//Author: Henryk Sosnowski
//Date: 9/18/2019
//Description: 

#include<iostream>
#include"intio.hpp"

int main()
{
	int firstInt = 0;
	int secondInt = 0;
	int thirdInt = 0;

	std::cout << "Please enter three integers: ";
	firstInt = getInt();
	secondInt = getInt();
	thirdInt = getInt();
	std::cout << std::endl;

	putInt(firstInt, 10);
	std::cout << std::endl;
	putInt(secondInt, 10);
	std::cout << std::endl;
	putInt(thirdInt, 10);
	std::cout << std::endl;

	return 0;
}