#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie();										// Default constructor
	Zombie(const std::string& name);				// Parameterized constructor
	Zombie(const Zombie& other);					// Copy constructor
	Zombie& operator=(const Zombie& other);			// Assignment operator
	~Zombie();										// Destructor

	void announce() const;
	void setName(const std::string& name);

private:
	std::string _name;
};

#endif // ZOMBIE_HPP
