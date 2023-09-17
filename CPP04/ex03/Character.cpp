#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(Character const & other)
{
	*this = other;
}

Character& Character::operator=(Character const & other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	this->inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return;
	this->inventory[idx]->use(target);
}

