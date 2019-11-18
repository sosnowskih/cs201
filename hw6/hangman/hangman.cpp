//Program: hangman.cpp
//Author: Henryk Sosnowski
//Date: 11/17/2019
//Description: This program will ask the user to guess an unknown word letter-by-letter.  The game is lost if the user guesses ten letters incorrectly.

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::map;

//Prints the hanging man based on the number of wrong guesses
void PrintMan(int wrong)
{
	//top of stand
	cout << "_________" << endl
		 << "|       |" << endl
		 << "|";

	//head
	if (wrong > 0) cout << "       O";

	//upper body and arms
	cout << endl << "|";
	if (wrong == 2) cout << "       |";
	else if (wrong == 3) cout << "      /|";
	else if (wrong > 3) cout << "      /|\\";

	//lower body and hands
	cout << endl << "|";
	if (wrong == 2) cout << "       |";
	else if (wrong == 5) cout << "     ' |";
	else if (wrong > 5) cout << "     ' | `";

	//legs
	cout << endl << "|";
	if (wrong == 7) cout << "      /";
	else if (wrong > 7) cout << "      / \\";

	//feet
	cout << endl << "|";
	if (wrong == 9) cout << "     '";
	else if (wrong > 9) cout << "     '   `";

	//base of stand
	cout << endl << "L__________" << endl;
}

//Prints either the correctly guessed char of the answer or an underscore
void PrintAnswer(map<char, int> answer, map<char, int> guess)
{
	cout << "Answer: ";

	auto check = guess.count(answer[1]);
	if (check != 0) cout << answer[1] << " ";
	else cout << "_ ";

	check = guess.count(answer[2]);
	if (check != 0) cout << answer[2] << " ";
	else cout << "_ ";

	check = guess.count(answer[3]);
	if (check != 0) cout << answer[3] << " ";
	else cout << "_ ";

	check = guess.count(answer[4]);
	if (check != 0) cout << answer[4] << " ";
	else cout << "_ " << endl;
}


int main()
{
	cout << "Try to guess a word letter-by-letter before you make ten mistakes." << endl;

	map<char, int> answer = {
		{'j', 1},
		{'a', 2},
		{'z', 3},
		{'z', 4}
	};

	map<char, int> guessm;
	int wrong = 0;
	int turn = 0;

	while (true)
	{
		PrintMan(wrong);
		PrintAnswer(answer, guessm);

		cout << "Guess a letter: ";
		char guess;
		std::cin >> guess;
		guessm[turn] = guess;

		auto check = answer.count(guess);
		if (check != 0)
		{
			cout << "Correct!" << endl;
		}
		else
		{
			cout << "Incorrect" << endl;
			++wrong;
		}
		++turn;

		if (wrong > 9)
		{
			cout << "Game Over!" << endl;
			break;
		}
	}

	return 0;
}