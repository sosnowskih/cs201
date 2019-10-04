#include"shrink.hpp"
#include<iostream>
#include<string>

void shrink(std::string word)
{
	std::string space(word.length(), ' ');
	for (int i = 0; i < word.length(); i++)
	{
		std::cout << word.substr(0, word.length()-i) << std::endl;
	}
}