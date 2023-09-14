/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:24:44 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/14 12:29:12 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap();

		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHealth();
		int getEnergy();
};

#endif