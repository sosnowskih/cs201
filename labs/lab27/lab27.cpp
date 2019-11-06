#include<iostream>
#include<random>
#include<vector>

int main()
{
	std::random_device rd;
	std::mt19937 gen(7);
	std::uniform_int_distribution<int> dist(0, 1);

	int heads = 0;
	int tails = 0;

	for (int i = 0; i < 1000; i++)
	{
		int randomNum = dist(gen);
		if (randomNum == 0)
		{
			heads++;
		}
		else
		{
			tails++;
		}
	}

	std::cout << "This program will flip 1000 coins." << std::endl
		<< "Result: " << heads << " heads and " << tails << " tails." << std::endl
		<< "Now it will shuffle a vector of 1-100\n" << std::endl;

	std::vector<int> vv;
	for (int i = 1; i <= 100; i++)
	{
		vv.push_back(i);
	}

	shuffle(begin(vv), end(vv), gen);

	for (auto n : vv)
	{
		std::cout << n << std::endl;
	}

	return 0;
}