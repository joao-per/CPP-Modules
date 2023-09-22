#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
	const std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &form);
        PresidentialPardonForm &operator= (const PresidentialPardonForm &form);

        const std::string getTarget() const;
        void action() const;
        void Error() const;
};

#endif