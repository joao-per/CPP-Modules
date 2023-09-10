#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " has entered in Gate keeper mode." << std::endl;
}

//gethealth
void ScavTrap::getHealth()
{
	std::cout << "ScavTrap " << name << " has " << hitPoints << " points of health!" << std::endl;
}