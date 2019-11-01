#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

void compare(std::vector<int> v1, std::vector<int> v2)
{
	auto m12 = std::mismatch(v1.begin(), v1.end(), v2.begin());

	while(m12.first != v1.end())
	{
		std::cout << "Mismatch found at index " << *m12.first-1 << ": " << v1[*m12.first - 1] << " != " << v2[*m12.first - 1] << std::endl;
		return;
	}
	std::cout << "No mismatch!" << std::endl;
}

int main()
{
	std::vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };
	std::vector<int> v2 = { 1, 2, 3, 4, 6, 6, 7 };
	std::vector<int> v3 = { 1, 2, 3, 4, 5, 6, 7 };

	compare(v1, v2);

	compare(v1, v3);

	return 0;
}