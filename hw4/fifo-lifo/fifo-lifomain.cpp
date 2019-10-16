//Program: fifo-lifo.cpp
//Author: Henryk Sosnowski
//Date: 10/15/2019
//Description: This program demonstrates to the user the concepts of first in first out and last in first out.  
//It displays a menu for the user to choose between these two, accepts items to add to the container, prints the container, 
//then allows the user to pop items from it.  

#include<iostream>
using std::cout;
using std::cin;
#include<vector>
#include<string>
using std::string;
#include"fifo-lifo.hpp"

int main()
{
	std::vector<std::string> container;
	cout << "This program will demonstrate the concepts of First in First out and Last in First out.\n";

	while (true)
	{
		if (!IsContainerEmpty)
		{
			PrintContainer(container);
		}
		cout << "Please select an option:\n"
			<<"1. First in First out\n"
			<<"2. Last in First out\n"
			<<"3. Exit\n";
		int choice = 0;
		string item;
		cin >> choice;

		if (choice == 1)
		{
			while (true)
			{
				cout << "Please enter an item for your container (0 to stop): ";
				cin >> item;
				if (item == "0")
				{
					break;
				}
				FifoPush(container, item);
			}
			while (true)
			{
				PrintContainer(container);
				cout << "Enter 1 to pop an item or any other key to go back.\n";
				int choice2;
				cin >> choice2;
				if (choice2 == 1)
				{
					FifoPop(container);
				}
				else
				{
					break;
				}
			}
		}
		else if (choice == 2)
		{
			while (true)
			{
				cout << "Please enter an item for your container (0 to stop): ";
				cin >> item;
				if (item == "0")
				{
					break;
				}
				LifoPush(container, item);
			}
			while (true)
			{
				PrintContainer(container);
				cout << "Enter 1 to pop an item or any other key to go back.\n";
				int choice2;
				cin >> choice2;
				if (choice2 == 1)
				{
					LifoPop(container);
				}
				else
				{
					break;
				}
			}
		}
		else if (choice == 3)
		{
			return 0;
		}
		else
		{
			cout << "Invalid Input.  ";
		}
	}
}