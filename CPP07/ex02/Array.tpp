#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template <class T>
class Array;

template <typename T>
Array<T>::Array()
{
	this->len = 0;
	this->array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->len = n;
	this->array = new T[n];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	unsigned int otherSize = other.size();

	this->array = new T[otherSize];
	this->len = otherSize;
	for (unsigned int i = 0; i < otherSize; i++)
		this->array[i] = other[i];
}

template <typename T>
Array<T> &Array<T>::operator= (const Array &other)
{
	int otherSize = other.size();

	delete[] this->array;
	this->array = new T[otherSize];
	this->len = otherSize;
	for (unsigned int i = 0; i < otherSize; i++)
		this->array[i] = other[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[] (unsigned int index)
{
	if (index < this->len)
		return this->array[index];
	else
		throw std::exception();
}

template <typename T>
const T &Array<T>::operator[] (unsigned int index) const
{
	if (index < this->len)
		return this->array[index];
	else
		throw std::exception();
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->len;
}

#endif