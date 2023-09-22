#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5), target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm(form), target(form.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &form)
{
	if (this != &form)
		this->AForm::operator=(form);
	return *this;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::action() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::Error() const
{
	std::cout << "Presidential pardon has failed!" << std::endl;
}