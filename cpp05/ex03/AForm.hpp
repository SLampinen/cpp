/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:32:05 by slampine          #+#    #+#             */
/*   Updated: 2024/01/25 11:20:06 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
	protected:
	const std::string name;
	bool isSigned;
	const int gradeSign;
	const int gradeExec;

	public:
	AForm ();
	AForm (std::string name, int gradeSign, int gradeExec);
	~AForm();
	AForm (const AForm &var);
	AForm& operator=(const AForm &var);

	std::string getName()const;
	int getGradeSign()const;
	int getGradeExec()const;
	bool getIsSigned()const;
	void beSigned(const Bureaucrat& bur);
	void beExecuted(const Bureaucrat& bur);
	virtual void Action() const = 0;

	class GradeTooHighException : public  std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public  std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class SignerTooLowException : public  std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class ExecerTooLowException : public  std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class IsAlreadySignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class ExecWhenNotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class DoWhenNotExistException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};
std::ostream & operator<<( std::ostream & o, AForm const & var);
#endif