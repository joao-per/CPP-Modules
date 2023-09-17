/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:16:12 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/17 21:53:20 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include <iostream>

int	main()
{
	std::cout << "Creating Animals:" << std::endl;
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	//This should not compile
	//AAnimal monkey = new AAnimal();
	
	std::cout << "\nAnimal Sounds:" << std::endl;
	
	std::cout << j->getType() << ": ";
	j->makeSound();


	std::cout << i->getType() << ": ";
	i->makeSound();

	std::cout << "\nTesting Deep Copy:" << std::endl;

	Dog* copiedDog = static_cast<Dog*>(j->clone());
	Cat* copiedCat = static_cast<Cat*>(i->clone());

	std::cout << copiedDog->getType() << ": ";
	copiedDog->makeSound();

	std::cout << copiedCat->getType() << ": ";
	copiedCat->makeSound();

	// set ideas to copiedDog and copiedCat
	copiedDog->getBrain()->setIdea(0, "Bones");
	copiedDog->getBrain()->setIdea(1, "Walks");
	copiedCat->getBrain()->setIdea(0, "Fish");
	copiedCat->getBrain()->setIdea(1, "Naps");

	std::cout << "\nDog's first idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat's first idea: " << copiedCat->getBrain()->getIdea(0) << std::endl;

	std::cout << "\nCreating and filling array of Animals:" << std::endl;

	const int numAnimals = 10;
	const AAnimal* animals[numAnimals];

	for(int k = 0; k < numAnimals; k++)
	{
		if (k < numAnimals / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	std::cout << "\nDeleting array of Animals:" << std::endl;
	for(int k = 0; k < numAnimals; k++)
		delete animals[k]; // should delete each animal and call the appropriate destructor

	std::cout << "\nDeleting individually created Animals:" << std::endl;
	delete j; 
	delete i;
	delete copiedDog;
	delete copiedCat;

	return 0;
}
