#include<iostream>
#include<vector>
#include<string>
#include"square.hpp"

int main()
{
	std::vector<std::string> input{ "69", "69a", "a69", "5.6", "    68", "\t11", "68 69", "0xA" };

	for (int i = 0; i < input.size(); i++)
	{
		bool isnum = square(input[i]);
		if (!isnum)
		{
			std::cout << "No number found." << std::endl;
		}
	}

	return 0;
}