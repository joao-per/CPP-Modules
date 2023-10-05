
#include "PmergeMe.hpp"
#include <set>

int checkInput(long num, char *end, std::set<int>& unique_check)
{
	if (*end != '\0')
	{
		std::cerr << "Error: Non-integer input provided." << std::endl;
		return (1);
	}
	if ((num == LONG_MAX || num == LONG_MIN) && errno == ERANGE)
	{
		std::cerr << "Error: Number out of range for conversion." << std::endl;
		return (1);
	}
	if (num <= 0)
	{
		std::cerr << "Error: Only positive integers are allowed." << std::endl;
		return (1);
	}
	if (num > INT_MAX)
	{
		std::cerr << "Error: Number exceeds maximum allowable integer value." << std::endl;
		return (1);
	}
	if (unique_check.find(static_cast<int>(num)) != unique_check.end())
	{
		std::cerr << "Error: Duplicate number detected: " << num << std::endl;
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cerr << "Error: Provide a sequence of positive integers." << std::endl;
		return (1);
	}

	std::vector<int> vec;
	std::list<int> lst;
	std::set<int> unique_check;
	for(int i = 1; i < ac; ++i)
	{
		char *end;
		long num = std::strtol(av[i], &end, 10); // 10 indicates base 10 number system

		if(checkInput(num, end, unique_check))
			return (1);
		// Safely convert long to int
		vec.push_back(static_cast<int>(num));
		lst.push_back(static_cast<int>(num));
		unique_check.insert(static_cast<int>(num));
	}
	PmergeMe pmergeMe(vec, lst);
	pmergeMe.sortAndDisplayResult();
	return (0);
}


		