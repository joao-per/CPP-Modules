#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span() {}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_n = copy._n;
		_v = copy._v;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_v.size() == _n)
		throw std::exception();
	_v.push_back(n);
}

int Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw std::exception();
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (unsigned int i = 2; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() <= 1)
		throw std::exception();
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	return v[v.size() - 1] - v[0];
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end - begin + _v.size() > _n)
		throw std::exception();
	_v.insert(_v.end(), begin, end);
}