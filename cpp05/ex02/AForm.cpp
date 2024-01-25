/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:32:02 by slampine          #+#    #+#             */
/*   Updated: 2024/01/24 10:20:08 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeExec > 150)
	{
		throw AForm::GradeTooLowException();
	}
	else if (gradeSign < 1 || gradeExec < 1)
	{
		throw AForm::GradeTooHighException();
	}
	this->isSigned = 0;
}
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Forms grade higher than is possible\n";
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return "Forms grade lower than is possible\n";
}
const char* AForm::IsAlreadySignedException::what() const throw()
{
	return "Form is already signed\n";
}
const char* AForm::ExecWhenNotSignedException::what() const throw()
{
	return "form must be signed before it can be executed\n";
}
const char* AForm::SignerTooLowException::what() const throw()
{
	return "bureaucrat's grade is too low to sign this\n";
}
const char* AForm::ExecerTooLowException::what() const throw()
{
	return "bureaucrat's grade is too low to execute this\n";
}
AForm::AForm() : name("None"), gradeSign(1), gradeExec(1)
{

}
AForm::~AForm()
{
	
}
AForm::AForm (const AForm &var) : name(var.name),  gradeSign(var.gradeSign), gradeExec(var.gradeExec)
{
	this->isSigned = var.isSigned;
}
AForm &AForm::operator=(const AForm& var)
{
	this->isSigned = var.isSigned;
	return *this;
}
std::string AForm::getName()const
{
	return this->name;
}
bool AForm::getIsSigned()const
{
	return this->isSigned;
}
int AForm::getGradeExec()const
{
	return this->gradeExec;
}
int AForm::getGradeSign()const
{
	return this->gradeSign;
}
void AForm::beSigned(const Bureaucrat& bur)
{
	if (this->isSigned == 1)
		throw AForm::IsAlreadySignedException();
	if (bur.getGrade() <= this->gradeSign)
		this->isSigned = 1;
	else
		throw AForm::SignerTooLowException();
}
void AForm::beExecuted(const Bureaucrat& bur)
{
	if (this->isSigned == 0)
		throw AForm::ExecWhenNotSignedException();
	else if (bur.getGrade() <= this->gradeExec)
	{
		this->Action();
	}
	else
		throw AForm::ExecerTooLowException();
}
std::ostream & operator<<(std::ostream & o, AForm const & var)
{
	o << var.getName() << " requires " << var.getGradeSign() << " to sign and " << var.getGradeExec() << " to execute.";
	if (var.getIsSigned())
		o << "It is already signed\n";
	else
		o << "It is not yet signed\n";
	return o;
}