/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:32:02 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 10:45:56 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
	{
		throw Form::GradeTooLowException();
	}
	else if (gradeSign < 1 || gradeExec < 1)
	{
		throw Form::GradeTooHighException();
	}
	this->isSigned = 0;
}
const char* Form::GradeTooHighException::what() const throw()
{
	return "Forms grade higher than is possible\n";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Forms grade lower than is possible\n";
}
const char* Form::IsAlreadySignedException::what() const throw()
{
	return "Form is already signed\n";
}
const char* Form::SignerTooLowException::what() const throw()
{
	return "Bureaucrat not allowed to sign this\n";
}
Form::~Form()
{
	
}
Form::Form (const Form &var) : name(var.name),  gradeSign(var.gradeSign), gradeExec(var.gradeExec)
{
	this->isSigned = var.isSigned;
}
Form &Form::operator=(const Form& var)
{
	this->isSigned = var.isSigned;
	return *this;
}
std::string Form::getName()const
{
	return this->name;
}
bool Form::getIsSigned()const
{
	return this->isSigned;
}
int Form::getGradeExec()const
{
	return this->gradeExec;
}
int Form::getGradeSign()const
{
	return this->gradeSign;
}
void Form::beSigned(const Bureaucrat& bur)
{
	if (this->isSigned == 1)
		throw Form::IsAlreadySignedException();
	if (bur.getGrade() <= this->gradeSign)
		this->isSigned = 1;
	else
		throw Form::SignerTooLowException();
}
std::ostream & operator<<(std::ostream & o, Form const & var)
{
	o << var.getName() << " requires " << var.getGradeSign() << " to sign and " << var.getGradeExec() << " to execute.";
	if (var.getIsSigned())
		o << "It is already signed\n";
	else
		o << "It is not yet signed\n";
	return o;
}