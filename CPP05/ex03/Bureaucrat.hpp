#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class AForm;

class Bureaucrat {

private:
	const std::string name;
	int grade;

public:
	class GradeTooHighException;
	class GradeTooLowException;
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator= (const Bureaucrat &bureaucrat);

	const std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &form);
	void executeForm(AForm const &form) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif