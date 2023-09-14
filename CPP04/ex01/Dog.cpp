// Dog.cpp

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog created!" << std::endl;
}

Dog::Dog(const Dog& other) {
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned!" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destroyed!" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}

Dog* Dog::clone() const {
    return new Dog(*this);
}
