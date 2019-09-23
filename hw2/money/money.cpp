/*Program: money
*Author: Henryk Sosnowski
*Date: 9/20/2019
*Description: 
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void InputChange(std::vector<int> & change, std::vector<std::string>& name);

void ListChange(std::vector<int>& change, std::vector<std::string>& name);

void PrintTotal(std::vector<int>& change);

int main()
{
	std::vector<int> change;
	std::vector<std::string> name = { "pennies", "nickels", "dimes", "quarters", "one-dollar coins" , "penny", "nickel", "dime", "quarter", "one-dollar coin"};

	std::cout << "This program will count your change.\n";

	InputChange(change, name);
	std::cout << std::endl;
	ListChange(change, name);
	std::cout << std::endl;
	PrintTotal(change);

	return 0;
}

//Asks the user for amount of different types of change and saves them to the change vector
void InputChange(std::vector<int> & change, std::vector<std::string> & name)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "How many " << name[i] << " do you have? ";
		int input = 0;
		std::cin >> input;
		change.push_back(input);
	}
}

//Lists the change from the values in the change vector
void ListChange(std::vector<int>& change, std::vector<std::string>& name)
{
	for (int i = 0; i < 5; i++)
	{
		if (change[i] == 1)
		{
			std::cout << "You have " << change[i] << " " << name[i + 5] << ".\n";
		}
		else
		{
			std::cout << "You have " << change[i] << " " << name[i] << ".\n";
		}
	}
}

//Adds up the change in the vector and displays the total
void PrintTotal(std::vector<int>& change)
{
	int sum = change[0] + 5 * change[1] + 10 * change[2] + 25 * change[3] + 100 * change[4];
	std::cout << "The value of all your coins is $" << sum / 100 << "." << sum % 100 << ".";
}