#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << " \033[1;32m grade " << b.getGrade() << "\033[1;0m" << std::endl;
	return os;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}


std::string Bureaucrat::getName() const
{
	return this->name;	
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << "\033[1;31m cannot sign " << f.getName() << " \033[1;33m because " << e.what() << "\033[1;0m" << std::endl;
	}
}
