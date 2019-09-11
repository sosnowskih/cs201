//Program: lab004
//Author: Henryk Sosnowski
//Date 9/11/2019
//Description: This program prints 1-100, replacing multiples of 3 with the word "Fizz."  Then it does the same but prints "buzz" when a number is a multiple of 5.

#include<iostream>

void fizz()
{
	for (int i = 1; i <= 100; ++i)
	{
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

void fizzbuzz()
{
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz ";
		}
		if (i % 5 == 0)
		{
			std::cout << "Buzz ";
		}
		else if (i % 3 != 0)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
}

int main()
{

	fizz();
	std::cout << "\n\n";
	fizzbuzz();
	return 0;
}