#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm &operator= (const RobotomyRequestForm &form);

		const std::string getTarget() const;
		void action() const;
		void printErrorMessage() const;
};

#endif