#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp2.addNumber(i);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;


	Span sp3 = Span(10000);
	std::vector<int> v;
	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	sp3.addNumber(v.begin(), v.end());
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	return 0;
}