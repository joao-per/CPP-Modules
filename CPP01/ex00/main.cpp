/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:33 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/17 00:34:34 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    // Creating a zombie on the heap and announcing
    Zombie* heapZombie1 = newZombie("HeapZombie1");
    heapZombie1->announce();

    // Creating another zombie on the heap
    Zombie* heapZombie2 = newZombie("HeapZombie2");
    heapZombie2->announce();

    // Creating zombies on the stack
    randomChump("StackZombie1");
    randomChump("StackZombie2");

    // Demonstrating copy constructor
    Zombie copiedZombie = *heapZombie1;
    copiedZombie.announce();

    // Demonstrating assignment operator
    Zombie assignedZombie;
    assignedZombie = *heapZombie2;
    assignedZombie.announce();

    // Changing the name of a zombie
    assignedZombie.setName("RenamedZombie");
    assignedZombie.announce();

    // Deleting heap-allocated zombies
    delete heapZombie1;
    delete heapZombie2;

    // Destructor for stack-allocated zombies will be called automatically

    return 0;
}

