//Program: names
//Author: Henryk Sosnowski
//Date: 9/16/2019
//Description: 

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void InputNames(std::vector<std::string>& names);

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);

void PrintNames(const std::vector<std::string>& names);

int main(int argc, char** argv)
{
	std::vector<std::string> nameList;
	InputNames(nameList);

	std::cout << "\nEnter a name to find: ";
	std::string searchForName;
	std::cin >> searchForName;
	if (DoesNameExist(searchForName, nameList))
	{
		std::cout << "Name found!";
	}
	else
	{
		std::cout << "Name not found.";
	}

	std::cout << "\n\n";
	PrintNames(nameList);

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

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nameToFind)
		{
			return true;
		}
	}
	return false;
}

void PrintNames(const std::vector<std::string>& names)
{
	std::cout << "Names: \n";
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << std::endl;
	}
}