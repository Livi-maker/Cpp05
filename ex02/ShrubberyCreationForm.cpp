#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)  : AForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : AForm(ref)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& ref)
{
	(void) ref;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	this->beSigned(executor);
	if (executor.executeForm(*this) == true)
	{
		std::ofstream file(this->getName() + "_shrubbery");
		if (!file)
			std::cout << "Couldn't create file\n";
		else
		{
			file << "ASCII trees";
			file.close();
		}
	}
}