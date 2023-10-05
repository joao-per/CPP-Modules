#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::vector<int>& v, std::list<int>& l) : vec(v), lst(l) {}

void PmergeMe::mergeInsertSort(std::vector<int>& v)
{
	for (size_t i = 1; i < v.size(); i++)
	{
		int key = v[i];
		size_t j = i;
		while (j > 0 && v[j-1] > key)
		{
			v[j] = v[j-1];
			j--;
		}
		v[j] = key;
	}
}

void PmergeMe::mergeInsertSort(std::list<int>& lst)
{
	std::list<int> result;

	while (!lst.empty())
	{
		int curr = lst.front();
		lst.pop_front();

		std::list<int>::iterator it;
		for (it = result.begin(); it != result.end(); ++it)
		{
			if (curr < *it) break;
		}
		result.insert(it, curr);
	}
	lst.swap(result);
}


void PmergeMe::sortAndDisplayResult()
{
	// Display before
	std::cout << "Before: ";
	for(std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Sort and time list
	clock_t start_lst = clock();
	mergeInsertSort(lst);
	clock_t end_lst = clock();
	double lstTime = static_cast<double>(end_lst - start_lst) / CLOCKS_PER_SEC * 1000000.0;

	// Display after list sorting
	std::cout << "After (List): ";
	for(std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process with std::list: " << lstTime << " micro seconds" << std::endl;

	// Display before vector sorting
	std::cout << "Before (Vector): ";
	for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Sort and time vector
	clock_t start_vec = clock();
	mergeInsertSort(vec);  // Ensure this function is properly defined in your class
	clock_t end_vec = clock();
	double vecTime = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000000.0;

	// Display after vector sorting
	std::cout << "After (Vector): ";
	for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process with std::vector: " << vecTime << " micro seconds" << std::endl;
}

