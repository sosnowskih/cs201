//Program: bulls-and-cows.cpp
//Author: Henryk Sosnowski
//Date: 10/15/2019
//Description: This program asks the user to guess a four-digit integer.  Correct digits in correct places are reported as bulls, 
//and correct digits in incorrect places are reported as cows.  The game repeats until the user gets the correct answer.


#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<math.h>

void userGuess(std::vector<int> & guess);

void guessCheck(const std::vector<int>& guess, const std::vector<int>& key, bool & won);


int main()
{
	bool won = false;
	std::vector<int> key { 3, 4, 2, 0 };

	while (!won)
	{
		std::vector<int> guess;
		userGuess(guess);

		guessCheck(guess, key, won);
	}

	std::cout << "Correct, you won!\n";
	return 0;
}


//Takes a line of input from the user and repeats if a four-digit integer is not entered
//Each digit of valid input is added to the referenced vector
void userGuess(std::vector<int>& guess)
{
	std::cout << "Try to guess the non-repeating four-digit number: ";
	int intInput = 0;
	std::string stringInput;

	std::getline(std::cin, stringInput);
	std::istringstream instream(stringInput);
	instream >> intInput;

	if (!instream || intInput < 1000 || intInput >= 10000)
	{
		while (intInput < 1000 || intInput >= 10000)
		{
			std::cout << "Error: Please enter a four-digit integer: ";
			std::getline(std::cin, stringInput);
			std::istringstream instream(stringInput);
			instream >> intInput;
		}
	}

	for (int n = 0; n < 4; ++n)
	{
		guess.push_back((int)stringInput[n]-48);
	}
}


//Compares the contents of the referenced guess and key vectors and prints the resulting numbers of bulls and cows
//Changes the referenced boolean value to true upon all numbers matching
void guessCheck(const std::vector<int>& guess, const std::vector<int>& key, bool &won) 
{
	int bull = 0;
	int cow = 0;
	std::vector<int> bulls(4, 0);

	for (int n = 0; n < 4; ++n)
	{
		if (guess[n] == key[n])
		{
			++bull;
			bulls[n] = 1;
		}
	}

	for (int n = 0; n < 4; ++n)
	{
		if (bulls[n] == 0)
		{
			for (int i = 0; i < 4; ++i)
			{
				if (guess[n] == key[i])
				{
					++cow;
				}
			}
		}
	}

	if (bull == 4)
	{
		won = true;
		return;
	}
	std::cout << "Incorrect.  There are " << bull << " bulls and " << cow << " cows.\n";
}