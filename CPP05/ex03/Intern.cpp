#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	if (this != &other) {}
	return *this;
}

Intern::~Intern() {}

AForm *createPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *createRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *createShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	AForm *form = NULL;
	std::string formNames[] =
	{
		"shrubbery request",
		"robotomy request",
		"presidential request"
	};
	AForm* (*constructors[])(std::string target) =
	{
		createShrubberyCreationForm,
		createRobotomyRequestForm,
		createPresidentialPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			form = constructors[i](target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	std::cout << "Intern could not create form" << std::endl;
	return (NULL);
}