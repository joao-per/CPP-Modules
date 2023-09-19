#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("Bureaucrat", 1);
		Form f("Form", 1, 1);
		Form z("ola", 10, 10);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		b.signForm(z);
		std::cout << f;
		std::cout << z;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrat", 150);
		Form f("Form", 150, 150);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrat", 1);
		Form f("Form", 150, 150);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrat", 150);
		Form f("Form", 1, 1);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrat", 1);
		Form f("Form", 1, 1);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
		std::cout << f;
		b.signForm(f);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}