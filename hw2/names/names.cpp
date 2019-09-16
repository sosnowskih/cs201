//Program: names
//Author: Henryk Sosnowski
//Date: 9/16/2019
//Description: 

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void InputNames(std::vector<std::string>& names);

int main(int argc, char** argv)
{
	std::vector<std::string> nameList;
	InputNames(nameList);

	return 0;
}

void InputNames(std::vector<std::string>& names)
{	
	for (int i = 0; i < 3; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}