#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool isSigned;
		int const gradeToSign;
		int const gradeToExecute;
	public:
		class GradeTooHighException;
		class GradeTooLowException;
		class FormAlreadySignedException;
		class FormNotSignedException;

		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(Form const &other);
		Form &operator=(Form const &other);
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat const &b);
};
std::ostream& operator<<(std::ostream& os, const Form& f);



#endif