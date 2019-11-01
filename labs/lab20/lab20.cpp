#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
	for(int angle = 0;  angle <= 180; angle += 5)
	{
		std::cout << std::setw(3) << angle << std::setw(12) << std::setprecision(8) << std::fixed << cos((angle*3.1415926535897)/180) << std::endl;
	}

	return 0;
}