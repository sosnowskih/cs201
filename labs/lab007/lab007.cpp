//Program: lab007
//Author: Henryk Sosnowski
//Date: 9/18/2019
//Description: 

#include<iostream>
#include<vector>
#include"intio.hpp"

void threeInt();

void varyInt();

int main()
{
	varyInt();

	return 0;
}

void threeInt()
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
}

void varyInt()
{
	std::vector<int> userInts;
	int input = 1;
	int counter = 1;
	int sum = 0;
	std::cout << "Please enter integers (0 to end): ";
	
	while (input != 0)
	{
		input = getInt();
		userInts.push_back(input);
		++counter;
	}

	for (int n = 0; n < userInts.size()-1; n++)
	{
		putInt(userInts[n], 14);
		std::cout << std::endl;
		sum += userInts[n];
	}
	std::cout << "Sum = ";
	putInt(sum, 8);
}