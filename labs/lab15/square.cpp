#include"square.hpp"
#include<sstream>

bool square(std::string line)
{
	std::istringstream instream(line);
	double num;
	instream >> num;

	if (!instream)
	{
		return false;
	}
	else
	{
		std::cout << num * num << std::endl;
		return true;
	}
}