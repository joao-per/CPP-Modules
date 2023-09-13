#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal		*meta;
	const Animal		*j;
	const Animal		*i;
	const WrongAnimal	*wrongMeta;
	const WrongAnimal	*wrongCat;

	meta = new Animal();
	j = new Dog();
	i = new Cat();
	wrongMeta = new WrongAnimal();
	wrongCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;
	
	return (0);
}
