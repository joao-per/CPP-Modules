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
			std::cout << "\033[34mIntern creates " << form->getName() << "\033[0m" <<std::endl;
			return (form);
		}
	}
	std::cout << "\033[31mIntern could not create form\033[0m" << std::endl;
	return (NULL);
}