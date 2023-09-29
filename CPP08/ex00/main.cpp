#include "easyfind.hpp"
#include <iostream>
#include <vector>


int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	try
	{
		std::cout << *easyfind(v, 2) << std::endl;
		std::cout << *easyfind(v, 3) << std::endl;
		std::cout << *easyfind(v, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return 0;
}