#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat first("Bureaucrat", 42);
	Bureaucrat second("Worst Bureaucrat", 150);
	Bureaucrat third("Best Bureaucrat", 1);

	try
	{
		std::cout << "VALID INCREMENT\n\n";
		first.IncrementGrade();
		std::cout << first << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\nINVALID DECREMENT\n\n";
		second.DecrementGrade();
		std::cout << second << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\nINVALID INCREMENT\n\n";
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
