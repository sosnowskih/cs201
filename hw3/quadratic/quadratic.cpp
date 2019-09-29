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
	double a, b, c, x1, x2 = 0;

	std::cout << "This program will calculate the roots of a quadratic equation.\n"
				<< "Please enter a: ";
	std::cin >> a;
	std::cout << "Please enter b: ";
	std::cin >> b;
	std::cout << "Please enter c: ";
	std::cin >> c;

	//Check for complex roots
	if (b * b - 4 * a * c < 0)
	{
		std::cout << "This equation has no real roots.\n"
			<< "The complex roots are " << (-b) / (2 * a) << " + " << sqrt(abs(b * b - 4 * a * c))/(2*a)
			<< "i and " << (-b) / (2 * a) << " - " << sqrt(abs(b * b - 4 * a * c))/(2*a) << "i";
	}
	//Result and verification for real roots
	else
	{
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

		std::cout << "The roots are " << x1 << " and " << x2
			<< "\nVerification: (" << a << ")*(" << x1 << ")^2 + (" << b << ")*(" << x1 << ") + " << c << " = " << a * x1 * x1 + b * x1 + c
			<< "\nVerification: (" << a << ")*(" << x2 << ")^2 + (" << b << ")*(" << x2 << ") + " << c << " = " << a * x2 * x2 + b * x2 + c;
	}
	return 0;
}