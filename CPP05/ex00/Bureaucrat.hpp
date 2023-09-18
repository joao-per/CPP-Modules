#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		class GradeTooHighException;
		class GradeTooLowException;

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif