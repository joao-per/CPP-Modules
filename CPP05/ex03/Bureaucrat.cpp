#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Grade is too high";
		}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Grade is too low";
		}
};

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
    std::cout << "Bureaucrat created: " << getName() << " " << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "Bureaucrat created: " << getName() << " " << getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destroyed: " << getName() << " " << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name)
{
	this->grade = bureaucrat.getGrade();
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
        this->grade = bureaucrat.getGrade();
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
	{
        form.beSigned(*this);
        std::cout << this->getName() << " \033[33msigned form.\033[0m" << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << this->getName() << " \033[31mcouldn't sign\033[0m " << form.getName()\
		<< " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		form.action();
		std::cout << this->getName() << " \033[33mexecuted\033[0m " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		form.Error();
		std::cout << this->getName() << " \033[31mcouldn't execute\033[0m " << form.getName()\
		<< " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ",  bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}
