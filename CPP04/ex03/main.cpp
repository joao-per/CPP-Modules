
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->createMateria("hello");	// Should not create unknown materia
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());	// Should not learn more than 4

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);	

	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob); // Should not accept negative index
	me->use(4, *bob); // Should not accept index out of bounds
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob); // Should not use empty slot
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	me->use(2, *bob);
	me->use(3, *bob); 

	AMateria* invalid = src->createMateria("cure");
	me->equip(invalid); // Should not equip it;

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete invalid;
	delete bob;
	delete me;
	delete src;

	return 0;
}