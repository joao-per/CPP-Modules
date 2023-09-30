#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(const T *array, size_t length, void (*func)(T const &))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void teste(T const &i)
{
	std::cout << i << std::endl;
}

#endif
