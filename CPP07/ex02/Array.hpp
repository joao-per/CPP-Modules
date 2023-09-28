#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;

public:
    // Default constructor
    Array() : _array(NULL), _size(0) {}

    // Parameterized constructor
    Array(unsigned int n) : _array(new T[n]()), _size(n) {}

    // Copy constructor
    Array(Array const &other) : _array(NULL), _size(0) {
        *this = other;
    }

    // Destructor
    ~Array() {
        delete[] _array;
    }

    // Assignment operator
    Array& operator=(Array const &other) {
        if (this != &other) {
            delete[] _array;

            _size = other._size;
            _array = new T[_size];

            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        return *this;
    }

    // Subscript operator
    T& operator[](unsigned int index) {
        if (index >= _size)
            throw std::exception();
        return _array[index];
    }

    // Const subscript operator for read-only purposes
    T const &operator[](unsigned int index) const {
        if (index >= _size)
            throw std::exception();
        return _array[index];
    }

    // Size function
    unsigned int size() const {
        return _size;
    }
};

#endif
