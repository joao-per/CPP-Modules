#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Form;
class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		class GradeTooHighException  : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too low");
				}
		};;
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();
		void signForm(Form &f);
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif