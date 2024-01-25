/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:23:44 by slampine          #+#    #+#             */
/*   Updated: 2023/10/26 13:56:36 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		this->grade = grade;  
	}
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade higher than is possible\n";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade lower than is possible\n";
}
Bureaucrat::~Bureaucrat()
{

}
Bureaucrat::Bureaucrat (const Bureaucrat &var) : name(var.name)
{
	this->grade = var.grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat& var)
{
	this->grade = var.grade;
	return *this;
}
void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = this->grade - 1;
}
void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = this->grade + 1;
}
std::string Bureaucrat::getName() const
{
	return this->name;
}
int Bureaucrat::getGrade() const
{
	return this->grade;
}
void Bureaucrat::signForm(AForm& Form)
{
	try
	{
		Form.beSigned(*this);
		std::cout <<this->name << " signed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
}
void Bureaucrat::executeForm(AForm& Form)
{
	try
	{
		Form.beExecuted(*this);
		std::cout <<this->name << " executed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " failed to sign " << Form.getName() << " because "  << e.what();
	}

}
std::ostream & operator<<( std::ostream & o, Bureaucrat const & var)
{
	o << var.getName() << ", bureaucrat grade " << var.getGrade() << ".\n";
	return o;
}