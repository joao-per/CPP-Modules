/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:56:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/01 16:56:52 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap joao("Joao");
	ClapTrap pedro("Pedro");

	joao.attack("Pedro");
	pedro.takeDamage(10);
	pedro.attack("Joao");
	joao.takeDamage(10);
	joao.beRepaired(10);
	pedro.beRepaired(10);
	return (0);
}