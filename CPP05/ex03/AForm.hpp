#ifndef AFORM_H
#define AFORM_H

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

public:
	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSignedException;
	class FormAlreadySignedException;

	AForm();
	AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
	virtual ~AForm();
	AForm(const AForm &form);
	AForm &operator= (const AForm &form);

	const std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
	void execute(Bureaucrat const &executor) const;
	virtual void action() const = 0;
	virtual void Error() const;
};
std::ostream& operator<<(std::ostream& os, const AForm& f);


#endif
