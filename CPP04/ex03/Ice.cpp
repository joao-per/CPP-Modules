#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}