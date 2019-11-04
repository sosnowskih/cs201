/**
 * @file     lambdas.hpp
 * @author   Henryk Sosnowski
 * @date     Nov 4, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	using SizeStringPair = std::pair<std::size_t, std::string>;
	std::vector<SizeStringPair> strings;
	for (const auto& n : WIKIPEDIA_CPP)
	{
		strings.push_back(std::make_pair(n.size(), n));
	}


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	std::sort(strings.begin(), strings.end(),
		[](SizeStringPair a, SizeStringPair b) {
			return a.first < b.first;
		});


	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector

	std::cout << printVectorPairs(strings.begin(), strings.end());


	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}
