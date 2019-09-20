/*Program: names
*Author: Henryk Sosnowski
*Date: 9/20/2019
*Description: This program inputs 10 names from the user, prompts for a name to find in that list, 
*			  displays the list, then displays the list again translated in a cipher (Al Bhed).
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

void InputNames(std::vector<std::string>& names);

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names);

void PrintNames(const std::vector<std::string>& names);

void PrintAlBhedNames(const std::vector<std::string>& names);

std::string alBhed(std::string name);

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
	
	std::cout << "\nThese are your names in Al Bhed:\n";
	PrintAlBhedNames(nameList);


	return 0;
}

//Asks the user for ten names and saves them in a vector
void InputNames(std::vector<std::string>& names)
{	
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}
}

//Searches a vector for the given string, returns true if it exists
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

//Prints the strings of a vector to the console with line breaks
void PrintNames(const std::vector<std::string>& names)
{
	std::cout << "Names: \n";
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << std::endl;
	}
}

//Prints the strings of a vector to the console translated to Al Bhed
void PrintAlBhedNames(const std::vector<std::string>& names)
{
	std::cout << "Names: \n";
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << alBhed(names[i]) << std::endl;
	}
}

//Translates a string into Al Bhed
std::string alBhed(std::string name)
{
	std::vector<std::string> cipher{"Y", "P", "L", "T", "A", "V", "K", "R", "E", "Z", "G", "M", 
									"S", "H", "U", "B", "X", "N", "C", "D", "I", "J", "F", "R", 
									"O", "W", "[", "\\", "]", "^", "_", "'", "y", "p", "l", "t", 
									"a", "v", "k", "r", "e", "z", "g", "m", "s", "h", "u", "b", 
									"x", "n", "c", "d", "i", "j", "f", "r", "o", "w" };
	std::string translated = "";

	for (int i = 0; i < name.length(); i++)
	{
		translated.append(cipher[(int)name[i]-65]);
	}

	return translated;
}