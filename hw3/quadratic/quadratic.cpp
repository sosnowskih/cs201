/*Program: quadratic
*Author: Henryk Sosnowski
*Date: 9/29/2019
*Description: This program computes the quadratic equation for the user, while checking for real roots.
*/

#include<iostream>
#include<math.h>
#include<cmath>

int main()
{
	double a, b, c = 0;

	std::cout << "This program will calculate the roots of a quadratic equation.\n"
				<< "Please enter a: ";
	std::cin >> a;
	std::cout << "Please enter b: ";
	std::cin >> b;
	std::cout << "Please enter c: ";
	std::cin >> c;

	if (b * b - 4 * a * c < 0)
	{
		std::cout << "This equation has no real roots.\n"
			<< "The complex roots are " << (-b) / (2 * a) << " + " << sqrt(abs(b * b - 4 * a * c))/(2*a)
			<< "i and " << (-b) / (2 * a) << " - " << sqrt(abs(b * b - 4 * a * c))/(2*a) << "i";
	}
	else
	{
		std::cout << "The roots are " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) 
					<< " and " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	}
	return 0;
}