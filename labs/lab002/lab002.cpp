/*lab002
Henryk Sosnowski
9/4/2019
This program asks the user for an integer, then prints the square of the next integer.
*/

#include<iostream>

int main() 
{
	int user_num;
	std::cout << "Please enter an integer: ";
	std::cin >> user_num;
	std::cout << (user_num + 1) << "^2 = " << (user_num + 1)*(user_num + 1) << std::endl;
	return 0;
}