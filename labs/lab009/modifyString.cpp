#include<iostream>
#include<string>
#include"modifyString.hpp"

/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */

int modifyString(std::string& referencedString, int n)
{
	std::string newstring;
	referencedString.append(std::to_string(n));
	return referencedString.length();
}