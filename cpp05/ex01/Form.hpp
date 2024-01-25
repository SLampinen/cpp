/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:32:05 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 09:53:30 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
	private:
	const std::string name;
	bool isSigned;
	const int gradeSign;
	const int gradeExec;

	public:
	Form (std::string name, int gradeSign, int gradeExec);
	~Form();
	Form (const Form &var);
	Form& operator=(const Form &var);

	std::string getName()const;
	int getGradeSign()const;
	int getGradeExec()const;
	bool getIsSigned()const;
	void beSigned(const Bureaucrat& bur);

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
	class IsAlreadySignedException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
};
std::ostream & operator<<( std::ostream & o, Form const & var);
#endif