/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:56:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/08 14:09:07 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap joao("Joao");
	ScavTrap scav("Scav");
	
	scav.attack("Joao");
	joao.getHealth();
	joao.takeDamage(20);
	joao.getHealth();
	joao.beRepaired(10);
	joao.getHealth();
	scav.guardGate();
	
	return (0);
}