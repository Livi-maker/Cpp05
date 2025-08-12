#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		_grade = 150;
	}

	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		_grade = 1;
	}

}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
	*this = ref;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& ref)
{
	this->_grade = ref.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::IncrementGrade(void)
{
	this->_grade -= 1;
	if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		_grade = 1;
	}
}

void	Bureaucrat::DecrementGrade(void)
{
	this->_grade += 1;
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		_grade = 150;
	}
}

void	Bureaucrat::signForm(Form& toSign)
{
	toSign.beSigned(*this);
	if (toSign.isItSigned() == true)
		std::cout << this->_name << " signed " << toSign.getName();
	else
		std::cout << _name << " couldn't sign " << toSign.getName() << " cause grade is too low" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

bool	Bureaucrat::executeForm(const AForm& form) const
{
	if (form.isItSigned() == true && form.beExecuted(*this) == true)
	{
		std::cout << this->_name << " executed " << form.getName();
		return (true);
	}
	else
		std::cout << this->_name << " couldn't execute " << form.getName();
	return false;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "." << std::endl;
	return (os);
}
