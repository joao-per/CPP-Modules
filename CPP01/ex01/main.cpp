/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:46 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/29 13:49:22 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie* horde = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; i++) 
        horde[i].announce();

    delete[] horde;

    return 0;
}
