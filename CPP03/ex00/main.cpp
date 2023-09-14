/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:56:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/14 14:16:34 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap joao("Joao");

	joao.attack("Pedro");
	joao.getEnergy();
	joao.takeDamage(10);
	std::cout << "Health points: " << joao.getHealth() << std::endl;
	joao.beRepaired(10);
	std::cout << "Health points: " << joao.getHealth() << std::endl;
	joao.getEnergy();
	return (0);
}