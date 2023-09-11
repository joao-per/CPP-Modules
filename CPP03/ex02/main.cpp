/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:56:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/12 18:56:06 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap joao("Joao");
	
	joao.attack("\033[1;33mEconomic Recession\033[0m");
	joao.takeDamage(20);
	std::cout << "Health points: " << joao.getHealth() << std::endl;
	joao.beRepaired(10);
	std::cout << "Health points: " << joao.getHealth() << std::endl;
	std::cout << "Energy points: " << joao.getEnergy() << std::endl;
	joao.highFivesGuys();
	
	return (0);
}