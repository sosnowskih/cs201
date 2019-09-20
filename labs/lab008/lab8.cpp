//Program: lab8
//Author: Henryk Sosnowski
//Date: 9/20/2019
//Description: 

#include<iostream>
#include"intio.hpp"
#include"lab8.hpp"

int doInput()
{
	int input = getInt();
	return input;
}

int compute(int n)
{
	if (n <= 0)
	{
		return 0;
	}

	int divisible = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			divisible += 1;
		}
	}

	return divisible;
}