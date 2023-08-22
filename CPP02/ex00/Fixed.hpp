/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 07:34:03 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/22 07:34:04 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int fixedValue;  // to store the fixed-point number value
		static const int fractionalBits = 8;  // number of fractional bits

	public:
		// Default constructor
		Fixed();

		// Copy constructor
		Fixed(const Fixed& src);

		// Copy assignment operator
		Fixed& operator=(const Fixed& rhs);

		// Destructor
		~Fixed();

		// Member function to get raw bits
		int getRawBits(void) const;

		// Member function to set raw bits
		void setRawBits(int const raw);
};

#endif // FIXED_HPP
