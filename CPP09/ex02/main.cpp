
#include "PmergeMe.hpp"

int main(int argc, char* argv[])
{
    if(argc < 2)
	{
        std::cerr << "Error: Provide a sequence of positive integers." << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::list<int> lst;

    for(int i = 1; i < argc; ++i)
	{
        int num = std::atoi(argv[i]);
        if(num <= 0)
        {
            std::cerr << "Error: Only positive integers are allowed." << std::endl;
            return 1;
        }
        vec.push_back(num);
        lst.push_back(num);
    }

    PmergeMe pmergeMe(vec, lst);
    pmergeMe.sortAndDisplayResult();

    return 0;
}
