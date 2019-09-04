/*lab002
Henryk Sosnowski
9/4/2019
This program asks the user for the month, day, and year of their birthday, then prints it in the mm/dd/yyyy format.
*/

#include<iostream>

int main()
{
	int bmonth;
	int bday;
	int byear;

	std::cout << "Please enter your birth month: ";
	std::cin >> bmonth;
	std::cout << "Please enter your birth day: ";
	std::cin >> bday;
	std::cout << "Please enter your birth year: ";
	std::cin >> byear;

	std::cout << "\nYour birthday is " << bmonth << "/" << bday << "/" << byear << std::endl;
	return 0;
}