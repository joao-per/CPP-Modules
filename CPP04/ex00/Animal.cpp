#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

const std::string &Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound!" << std::endl;
}
