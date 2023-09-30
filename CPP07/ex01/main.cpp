#include <iostream>
#include "iter.hpp"

void printInt(int const &i)
{
	std::cout << i << std::endl;
}

void printString(std::string const &s)
{
	std::cout << s << std::endl;
}

int main()
{
	int arrInt[] = {1, 2, 3, 4, 5};
	size_t lenInt = sizeof(arrInt) / sizeof(*arrInt);

	std::cout << "Integers:" << std::endl;
	iter(arrInt, lenInt, printInt);

	std::string arrStr[] = {"apple", "banana", "cherry"};
	size_t lenStr = sizeof(arrStr) / sizeof(*arrStr);

	std::cout << "\nStrings:" << std::endl;
	iter(arrStr, lenStr, printString);

	std::cout << std::endl;
	iter(arrInt, lenInt, teste<const int>); // This line should print nothing (no segfault)

	return 0;
}
