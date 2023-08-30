/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 07:34:11 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/01 12:04:14 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>  // For roundf function

class Fixed
{
	private:
		int fixedValue;  
		static const int fractionalBits = 16;  

	public:
		// Default constructor
		Fixed();

		// Constructor that takes a constant integer
		Fixed(const int intVal);

		// Constructor that takes a constant floating-point number
		Fixed(const float floatVal);

		// Copy constructor
		Fixed(const Fixed& src);

		// Copy assignment operator
		Fixed& operator=(const Fixed& rhs);

		// Destructor
		~Fixed();

		// Convert to float
		float toFloat(void) const;

		// Convert to int
		int toInt(void) const;

		// Get raw bits
		int getRawBits(void) const;

		// Set raw bits
		void setRawBits(int const raw);
};

// Overload of the insertion operator for Fixed class
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_HPP
