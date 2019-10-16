#include<iostream>
#include<vector>
#include<string>
#include"fifo-lifo.hpp"

//First-In First-Out
//Increases the size of the vector by one and adds the item to the front as index 0
void FifoPush(std::vector<std::string>& container, const std::string& item)
{
	container.resize(container.size() + 1);

	for (int i = 0; i < container.size()-1; ++i)
	{
		container[container.size() - i - 1] = container[container.size() - i - 2];
	}
	container[0] = item;
}


void FifoPop(std::vector<std::string>& container, const std::string& item)
{
	container.pop_back();
}

//Last-In First-Out
void LifoPush(std::vector<std::string>& container, const std::string& item)
{

}

void LifoPop(std::vector<std::string>& container, const std::string& item)
{

}

//Shared functionality
bool IsContainerEmpty(const std::vector<std::string>& container)
{
	
	return true;
}

void PrintContainer(const std::vector<std::string>& container)
{

}

//Test Functions
bool TestFifo()
{

	return true;
}

bool TestLifo()
{

	return true;
}

