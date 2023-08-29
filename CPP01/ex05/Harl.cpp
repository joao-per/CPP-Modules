/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:46 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/29 12:11:48 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	complaintLevels[0] = "DEBUG";
	complaintLevels[1] = "INFO";
	complaintLevels[2] = "WARNING";
	complaintLevels[3] = "ERROR";

	complaintFunctions[0] = &Harl::debug; // Assign the function pointers
	complaintFunctions[1] = &Harl::info; // to the corresponding functions
	complaintFunctions[2] = &Harl::warning; // using the address-of operator
	complaintFunctions[3] = &Harl::error; // and the scope resolution operator
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
	for (int i = 0; i < 4; i++) // Assuming there are 4 complaint levels
	{
		if (complaintLevels[i] == level)
		{
			(this->*complaintFunctions[i])(); // Call the corresponding function using the function pointer
			return;
		}
	}

}
