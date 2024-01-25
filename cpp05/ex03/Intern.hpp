/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:29:56 by slampine          #+#    #+#             */
/*   Updated: 2024/01/25 11:50:39 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
class Intern{
	private:
	AForm* makeShrub(std::string target);
	AForm* makeRobo(std::string target);
	AForm* makePardon(std::string target);
	int	checkInput(std::string name, std::string target);

	public:
	Intern();
	Intern(Intern const &var);
	~Intern();
	Intern& operator=(const Intern &var);
	AForm* makeForm(std::string name, std::string target);
	class EmptyInputException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class NoMatchException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class TooAmbigousInputException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
};
#endif