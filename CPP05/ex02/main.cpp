#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		Bureaucrat bureaucrat("TONI", 1);
		std::cout << std::endl;
		{	// SUCCESS ShrubberyCreationForm
			std::cout << "-----------ShrubberyCreationForm SUCCESS" << std::endl;
			std::cout << std::endl;
			ShrubberyCreationForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{	// SUCCESS RobotomyRequestForm
			std::cout << std::endl;
			std::cout << "-----------RobotomyRequestForm SUCCESS" << std::endl;
			std::cout << std::endl;
			RobotomyRequestForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{
			// SUCCESS PresidentialPardonForm
			std::cout << std::endl;
			std::cout << "-----------PresidentialPardonForm SUCCESS" << std::endl;
			std::cout << std::endl;
			PresidentialPardonForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{ 	// LOW GRADE ShrubberyCreationForm
			std::cout << std::endl;
			std::cout << "-----------ShrubberyCreationForm FAIL" << std::endl;
			std::cout << std::endl;
			Bureaucrat bureaucrat("TONI", 150);
			std::cout << std::endl;
			ShrubberyCreationForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{	// LOW GRADE RobotomyRequestForm
			std::cout << std::endl;
			std::cout << "-----------RobotomyRequestForm FAIL" << std::endl;
			std::cout << std::endl;
			Bureaucrat bureaucrat("TONI", 150);
			std::cout << std::endl;
			RobotomyRequestForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{	// LOW GRADE PresidentialPardonForm
			std::cout << std::endl;
			std::cout << "-----------PresidentialPardonForm FAIL" << std::endl;
			std::cout << std::endl;
			Bureaucrat bureaucrat("TONI", 150);
			std::cout << std::endl;
			PresidentialPardonForm form("Target");
			std::cout << std::endl;
			bureaucrat.signForm(form);
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
		{	// LOW GRADE PresidentialPardonForm NOT SIGNED
			std::cout << std::endl;
			std::cout << "-----------PresidentialPardonForm FAIL NO SIGN" << std::endl;
			std::cout << std::endl;
			Bureaucrat bureaucrat("TONI", 1);
			std::cout << std::endl;
			PresidentialPardonForm form("Target");
			std::cout << std::endl;
			bureaucrat.executeForm(form);
			std::cout << std::endl;
		}
	}
	return 0;
}
