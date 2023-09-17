/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:16:07 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/17 19:16:08 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.cpp

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat created!" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain; 
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat assigned!" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Cat* Cat::clone() const
{
	return new Cat(*this);
}

Brain* Cat::getBrain() const
{
	return this->brain;
}