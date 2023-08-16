/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:53 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:14:00 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
	{
        horde[i] = Zombie(name + std::to_string(i + 1)); // Added a unique number to each Zombie's name
    }

    return horde;
}
