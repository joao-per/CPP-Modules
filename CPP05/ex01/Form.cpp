#include "Form.hpp"

class Form::GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Grade too high";
		}
};

class Form::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Grade too low";
		}
};

class Form::FormNotSignedException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Form not signed";
		}
};

class Form::FormAlreadySignedException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Form already signed";
		}
};

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{

}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (this->gradeToSign < 1 || this->gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeToSign > 150 || this->gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getGradeToSign() const
{
	return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->isSigned)
		throw Form::FormAlreadySignedException();
	this->isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", form grade to sign " << f.getGradeToSign() << ", form grade to execute " << f.getGradeToExecute() << ", form is signed " << f.getIsSigned() << std::endl;
	return os;
}