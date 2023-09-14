#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
		
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};