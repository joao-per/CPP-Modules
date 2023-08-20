/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:46 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/20 14:57:47 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	complaintsMap["DEBUG"] = &Harl::debug;
	complaintsMap["INFO"] = &Harl::info;
	complaintsMap["WARNING"] = &Harl::warning;
	complaintsMap["ERROR"] = &Harl::error;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	if (complaintsMap.find(level) != complaintsMap.end())
	{
		(this->*complaintsMap[level])();  // Call the corresponding function using the function pointer
	} else
		std::cout << "Invalid complaint level!" << std::endl;
}
