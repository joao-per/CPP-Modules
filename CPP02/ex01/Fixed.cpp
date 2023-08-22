/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 07:34:09 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/22 07:34:10 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intVal)
{
    std::cout << "Int constructor called" << std::endl;
    fixedValue = intVal << fractionalBits;  // Shift left to account for fractional bits
}

Fixed::Fixed(const float floatVal)
{
    std::cout << "Float constructor called" << std::endl;
    fixedValue = roundf(floatVal * (1 << fractionalBits));  // Convert float to fixed-point value
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->fixedValue = rhs.fixedValue;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)fixedValue / (1 << fractionalBits);  // Convert fixed-point value to float
}

int Fixed::toInt(void) const
{
    return fixedValue >> fractionalBits;  // Shift right to discard fractional bits
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedValue = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
