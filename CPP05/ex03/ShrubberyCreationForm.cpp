#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137), target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : AForm(form), target(form.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this != &form)
		this->AForm::operator=(form);
	return *this;
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void ShrubberyCreationForm::Error() const
{
	std::cout << "Shrubbery has failed!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	action();
}
gi
void ShrubberyCreationForm::action() const
{
	std::ofstream file;
	std::string fileName = this->target + "_shrubbery";
	std::string tree =
		"       ^       \n"
		"      ^^^      \n"
		"     ^^^^^     \n"
		"    ^^^^^^^    \n"
		"   ^^^^^^^^^   \n"
		"  ^^^^^^^^^^^  \n"
		" ^^^^^^^^^^^^^ \n"
		"^^^^^^^^^^^^^^^\n"
		"      |||      \n"
		"      |||      \n";

	file.open(fileName.c_str());
	if (!file.is_open())
	{
		std::cout << "Failed to open file: " << fileName << std::endl;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		file << tree << std::endl;
		file << std::endl;
	}
	file.close();
}