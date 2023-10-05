#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm> // for sort
#include <ctime> // for clock
#include <cstring> // for strcmp
#include <climits> // for INT_MAX
#include <cerrno> // for errno

class PmergeMe
{
	public:
		PmergeMe(const PmergeMe& other);
		PmergeMe(std::vector<int>& v, std::list<int>& l);
		PmergeMe& operator=(const PmergeMe& other);
		void sortAndDisplayResult();
	private:
		std::vector<int> vec;
		std::list<int> lst;

		void mergeInsertSort(std::vector<int>& v);
		void mergeInsertSort(std::list<int>& l);

};

#endif