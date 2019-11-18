//Program: random-map.cpp
//Author: Henryk Sosnowski
//Date: 11/17/2019
//Description: This program generates sets of random integers using uniform distribution, normal distribution, and the rand() function and 
//prints histograms of those values.


#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

using std::cout;
using std::endl;


// Seed with a real random value
std::random_device r;
std::mt19937 gen(r());

//Generates a random integer between the given values using uniform distribution
int RandomBetweenU(int first, int second)
{
	std::uniform_int_distribution<int> dist(first, second);
	return dist(gen);
}

//Generates a random integer between the given values using normal distribution
int RandomBetweenN(int first, int second)
{
	int mean = first + (second - first)/2;

	std::normal_distribution<> dist(mean, 1);
	int result = dist(gen);
	if (result < first)
	{
		return first;
	}
	else if (result > second)
	{
		return second;
	}
	else
	{
		return result;
	}
}

//Generates a random integer between the given values using uniform distribution
int RandomBetween(int first, int second)
{
	return first + rand() % (second - first + 1);
}

//Prints a map of integers based on the frequency of reoccuring values
void PrintDistribution(const std::map<int, int>& numbers)
{
	for (auto p : numbers) {
		cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}

//Returns a map of 10000 enteries between the given values, using the generation function specified
std::map<int, int> GenMap(int first, int second, int RandomGen(int,int))
{
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(RandomGen(first, second))];
	}
	return hist;
}


int main()
{
	int min = 1;
	int max = 9;

	cout << "This Program will print histograms between " << min << " and " << max << " using three different generation methods." << endl
		<< endl << "Uniform Distribution:" << endl;

	std::map<int, int> hist = GenMap(min, max, RandomBetweenU);
	PrintDistribution(hist);

	cout << endl << "Normal Distribution:" << endl;

	hist = GenMap(min, max, RandomBetweenN);
	PrintDistribution(hist);

	cout << endl << "Distribution using rand():" << endl;

	hist = GenMap(min, max, RandomBetween);
	PrintDistribution(hist);

	return 0;
}