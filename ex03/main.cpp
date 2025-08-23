#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern prova;
		AForm* form;

		form = prova.makeForm("presidential request", "Zaphod");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Intern prova;
		AForm* form;

		form = prova.makeForm("robotomy request", "robot");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Intern prova;
		AForm* form;

		form = prova.makeForm("shrubbery request", "home");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Intern prova;
		AForm* form;

		form = prova.makeForm("nothing", "42");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
