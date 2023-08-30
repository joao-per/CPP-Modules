#include <iostream>
#include "Fixed.hpp"
int main( void )
{
	Fixed a;
	/* The line `Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );` is creating a `Fixed` object named `b` and
	initializing it with the result of multiplying two `Fixed` objects: `Fixed( 5.05f )` and `Fixed( 2
	)`. */
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a\n";
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
