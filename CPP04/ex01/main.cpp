#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "Creating Animals:" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
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

    std::cout << "\nDeleting Animals:" << std::endl;

    delete j; 
    delete i;
    delete copiedDog;
    delete copiedCat; 

    return 0;
}
