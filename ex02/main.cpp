#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form		Form("first Form", 50, 70);
		std::cout << Form << std::endl;
		Bureaucrat first("Liv", 42);
		std::cout << "VALID INCREMENT\n\n";
		std::cout << first << std::endl;
		first.IncrementGrade();
		std::cout << first << std::endl;
		Form.beSigned(first);
		std::cout << Form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form Form("second Form", 50, 70);
		Bureaucrat second("Worst Bureaucrat", 150);
		std::cout << "\n\nINVALID DECREMENT\n\n";
		std::cout << second << std::endl;
		Form.beSigned(second);
		second.DecrementGrade();
		std::cout << second << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat third("Best Bureaucrat", 1);
		std::cout << "\n\nINVALID INCREMENT\n\n";
		std::cout << third << std::endl;
		third.IncrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\nINVALID CREATION\n\n";
		Bureaucrat invalid("invalid", -42);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
