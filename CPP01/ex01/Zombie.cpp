/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:50 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:13:51 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(const std::string& name) : _name(name) {}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::announce(void) const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
