#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<random>


void printIntegersToFile(const std::vector<int>& integers, std::ofstream& output)
{
	for (int tens = 0; tens < 10; tens++)
	{
		for (int ones = 0; ones < 10; ones++)
		{
			output << std::setw(4) << integers[tens * 10 + ones];
		}
		output << "\n";
	}
}


int main()
{
	//Open  first file for output
	std::ofstream fout("output1.txt");
	if (!fout)
	{
		std::cout << "Error opening file!" << std::endl;
		return 0;
	}

	for (int tens = 0; tens < 10; tens++)
	{
		for (int ones = 1; ones <= 10; ones++)
		{
			fout << std::setw(4) << tens*10 + ones;
		}

		fout << "\n";
	}

	std::cout << "1-100 table written to output1.txt 10 times." << std::endl;

	std::vector<int> vv;
	for (int i = 1; i <= 100; i++)
	{
		vv.push_back(i);
	}

	std::random_device rd;
	std::mt19937 gen(rd());
	std::shuffle(begin(vv), end(vv), gen);

	//Open second file for output
	std::ofstream vout("output2.txt");
	if (!vout)
	{
		std::cout << "Error opening file!" << std::endl;
		return 0;
	}

	printIntegersToFile(vv, vout);

	std::cout << "1-100 table written to output2.txt 10 times." << std::endl;

	return 0;
}