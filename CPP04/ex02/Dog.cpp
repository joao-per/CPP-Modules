/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:16:09 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/17 19:16:10 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog created!" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog assigned!" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

Dog* Dog::clone() const
{
	return new Dog(*this);
}

Brain* Dog::getBrain() const
{
	return this->brain;
}

