//Program: lab004
//Author: Henryk Sosnowski
//Date 9/11/2019
//Description: This program prints 1-100, replacing multiples of 3 with the word "Fizz"

#include<iostream>

void fizz()
{
	std::cout << "hi";
	for (int i = 0; i < 100; ++i)
	{
		std::cout << "hi";
		if (i % 3 == 0)
		{
			std::cout << "Fizz\n";
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	fizz;
	return 0;
}