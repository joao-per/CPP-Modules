// Cat.cpp

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat created!" << std::endl;
}

Cat::Cat(const Cat& other) {
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        this->type = other.type;
        delete this->brain; // delete current brain before assigning new one
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destroyed!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Cat* Cat::clone() const {
    return new Cat(*this);
}
