#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const;
    Dog* clone() const;
};


#endif
