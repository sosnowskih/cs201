/*Program: money
*Author: Henryk Sosnowski
*Date: 9/20/2019
*Description: 
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int InputChange(std::string name);

int main()
{
	std::vector<int> change;

	std::cout << "This program will count your change.\n";
	change.push_back(InputChange("pennies"));


	std::cout << change[0];

	return 0;
}

//Asks for and returns user input based on the given string parameter
int InputChange(std::string name)
{
	std::cout << "How many " << name << " do you have? ";
	int n;
	std::cin >> n;
	return n;
}