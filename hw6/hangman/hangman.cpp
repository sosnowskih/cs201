//Program: hangman.cpp
//Author: Henryk Sosnowski
//Date: 11/17/2019
//Description: This program will ask the user to guess an unknown word letter by letter.  The game is lost if the user guesses ten letters incorrectly.

#include<iostream>

using std::cout;
using std::endl;

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


int main()
{

	
	return 0;
}