//Program: hangman.cpp
//Author: Henryk Sosnowski
//Date: 11/17/2019
//Description: This program will ask the user to guess an unknown word letter-by-letter.  The game is lost if the user guesses ten letters incorrectly.

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;


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
void PrintAnswer(vector<char> answer, map<char, int> guess)
{
	cout << "Answer: ";

	auto check = guess.count(answer[0]);
	if (check != 0) cout << answer[0] << " ";
	else cout << "_ ";

	check = guess.count(answer[1]);
	if (check != 0) cout << answer[1] << " ";
	else cout << "_ ";

	check = guess.count(answer[2]);
	if (check != 0) cout << answer[2] << " ";
	else cout << "_ ";

	check = guess.count(answer[3]);
	if (check != 0) cout << answer[3] << endl;
	else cout << "_ " << endl;
}


//Checks if the entire answer has been guessed
bool HasWon(vector<char> answer, map<char, int> guess)
{
	auto check0 = guess.count(answer[0]);
	auto check1 = guess.count(answer[1]);
	auto check2 = guess.count(answer[2]);
	auto check3 = guess.count(answer[3]);

	if (check0 && check1 && check2 && check3) return true;
	else return false;
}


int main()
{
	cout << "Try to guess a word letter-by-letter before you make ten mistakes." << endl;

	vector<char> answer = { 'j', 'a', 'z', 'z' };
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
		guessm[guess] = turn;

		if (std::binary_search(answer.begin(), answer.end(), guess))
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

		if (HasWon(answer, guessm))
		{
			PrintAnswer(answer, guessm);
			cout << "You have won!" << endl;
			break;
		}
	}

	return 0;
}