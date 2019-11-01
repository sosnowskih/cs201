#include <iostream>
#include <map>
#include<string>
using std::map;

int main() 
{
	map<std::string, int> m;

	m["a"] = 1;
	m["s"] = 2;
	m["f"] = 4;
	m["d"] = 3;
	m["g"] = 5;

	m.erase("d");

	std::cout << "Enter a key to search: ";
	std::string key;
	std::getline(std::cin, key);

	auto mapcount = m.count(key);
	if (mapcount != 0)
	{
		std::cout << "Key Found!  Value = " << m[key] << std::endl;
	}
	else
	{
		std::cout << "Key not found." << std::endl;
	}

	for (const auto& p : m)
	{
		auto k = p.first;
		auto v = p.second;
		std::cout << "Key = " << k << " Value = " << v << std::endl;
	}

	return 0;
}