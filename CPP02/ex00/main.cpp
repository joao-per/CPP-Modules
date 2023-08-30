/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 07:34:06 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/01 11:16:48 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	a.setRawBits(23);
	std::cout << a.getRawBits() << std::endl;
	return 0;
}

/* Explanation:
The default constructor is called when the object a is created.
The copy constructor is called when the object b is created.
The copy assignment operator is called when the object c is created.
The getRawBits member function is called 3 times, once for each object.
The destructor is called 3 times, once for each object.
Note that the copy constructor and the copy assignment operator are called
when an object is created from another object. The copy constructor is called
when the object is created, and the copy assignment operator is called when
the object is already created.
The copy constructor and the copy assignment operator are called when an
object is created from another object. The copy constructor is called when
the object is created, and the copy assignment operator is called when the
object is already created. */
