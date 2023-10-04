#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>

class PmergeMe
{
	public:
		PmergeMe() {}
		~PmergeMe() {}
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
};

#endif