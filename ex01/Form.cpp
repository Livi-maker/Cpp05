#include "Form.hpp"

Form::Form(void) : _name("anonymous form"), _gradeToExecute(42), _gradeToSign(42), _signed(false)
{}

Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& ref)
{
	*this = ref;
}

Form& Form::operator = (const Form& ref)
{
	this->_name = ref._name;
	this-__gradeToSign = ref._gradeToSign;
	this->_gradeToExecute = ref.gradeToExecute;
	this->_signed = ref._signed;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	Form::isItSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > 150)
		throw Form::gradeTooLowException();
	else if (bureaucrat.getGrade() < 1)
		throw Form::gradeTooHighException();
	else if (bureaucrat.getGrade() <= this->_gradeToSign)
		_signed = true;
}

std::string	Form::gradeTooLowException::what() const throw()
{
	return ("Grade Too low..\n");
}

std::string	Form::gradeTooHightException::what() const throw()
{
	return ("Grade too high..\n");
}

std::ostream& operator<< (std::ostream& os, const Form& ref)
{
	os << "Form " <<ref.getName() << " needs a grade of " << ref.getGradeToSign();
	os << " to be signed and a grade of " << ref.getGradeToExecute();
	os << " to be executed" << std::endl;
	if (ref.isItSigned == true)
		os << "Current state: form signed" << std::endl;
	else
		os << "Current state: to sign" << std::endl;
	return (os);
}
