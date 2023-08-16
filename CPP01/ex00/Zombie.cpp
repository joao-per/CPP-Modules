/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:42 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:13:43 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("default") {}

Zombie::Zombie(const std::string& name) : _name(name) {}

Zombie::Zombie(const Zombie& other) : _name(other._name) {}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed.\n";
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name)
{
	_name = name;
}
