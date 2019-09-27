//Program: lab011
//Author: Henryk Sosnowski
//Date: 9/27/2019
//Description: 

#include<iostream>
#include<vector>

int main()
{
	for (;;)
	{
		std::string input;
		std::vector<char> lower;
		std::vector<char> upper;
		std::vector<char> punct;

		std::cout << "Enter a string: ";
		std::cin >> input;

		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= 'a' && input[i] <= 'z')
			{
				lower.push_back(input[i]);
			}
			else if (input[i] >= 'A' && input[i] <= 'Z')
			{
				upper.push_back(input[i]);
			}
			else
			{
				punct.push_back(input[i]);
			}
		}

		for (int n = 0; n < lower.size(); n++)
		{
			std::cout << lower[n];
		}
		std::cout << "\n";
		for (int n = 0; n < upper.size(); n++)
		{
			std::cout << upper[n];
		}
		std::cout << "\n";
		for (int n = 0; n < punct.size(); n++)
		{
			std::cout << punct[n];
		}
		std::cout << "\n\n";
	}

	return 0;
}