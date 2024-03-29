#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45), target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm(form), target(form.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &form)
{
	if (this != &form)
		this->AForm::operator=(form);
	return *this;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	action();
}

void RobotomyRequestForm::action() const
{
	std::cout << "VRRRRRRRRRRRRRRRRRRRRRR!!!!" << std::endl;
	std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
}

void RobotomyRequestForm::Error() const
{
	std::cout << "Robotomy has failed!" <<std::endl;
}