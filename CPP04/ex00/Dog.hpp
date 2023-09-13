#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog();
	virtual ~Dog();

	void makeSound() const;
};

#endif
