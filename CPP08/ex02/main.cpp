#include "MutantStack.hpp"


template <class T>
MutantStack<T>::MutantStack() : std::stack<T, std::deque<T> >() {}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T, std::deque<T> >(other) {}

template <class T>
MutantStack<T> &MutantStack<T>::operator= (const MutantStack<T> &other)
{
	if (this == &other)
		return *this;
	std::stack<T, std::deque<T> >::operator=(other);
	return *this;
}

template <class T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T, std::deque<T> >::c.begin();
}

template <class T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
	return std::stack<T, std::deque<T> >::c.end();
}


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "stack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << "top: " << s.top() << std::endl;
	return 0;
}