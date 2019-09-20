/*Program: money
*Author: Henryk Sosnowski
*Date: 9/20/2019
*Description: 
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void InputChange(std::vector<int> & change);

int main()
{
	std::vector<int> change;

	std::cout << "This program will count your change.\n";

	InputChange(change);

	return 0;
}

//Asks the user for amount of different types of change and saves them to the change vector
void InputChange(std::vector<int> & change)
{
	std::vector<std::string> name = {"pennies", "nickels", "dimes", "quarters", "one-dollar coins"};
	for (int i = 0; i < name.size(); i++)
	{
		std::cout << "How many " << name[i] << " do you have? ";
		int input = 0;
		std::cin >> input;
		change.push_back(input);
	}
}