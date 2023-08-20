/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:58:50 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/20 14:59:07 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av)
{
	if(ac != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}

	Harl customer;
	customer.filteredComplain(av[1]);
	return 0;
}
