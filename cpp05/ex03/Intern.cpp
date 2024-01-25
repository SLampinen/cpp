/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:29:54 by slampine          #+#    #+#             */
/*   Updated: 2024/01/25 11:51:11 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern (const Intern &var)
{
	(void)var;
}

Intern &Intern::operator=(const Intern& var)
{
	(void)var;
	return *this;
}
AForm* Intern::makeShrub(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm* Intern::makeRobo(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm* Intern::makePardon(std::string target)
{
	return new PresidentialPardonForm(target);
}
int Intern::checkInput(std::string name, std::string target)
{
	try{
		if (name.empty() || target.empty())
			throw Intern::EmptyInputException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
		return (0);
	}
	try
	{
		int i = 0;
		int matches = 0;
		std::string FormNamesArray[3] = {"presidential pardon form", "robotomy request form", "shrubbery creation form"};
		while (i < 3)
		{
			if (FormNamesArray[i].find(name) != std::string::npos)
				matches++;
			i++;
		}
		if (matches > 1)
			throw Intern::TooAmbigousInputException();
		if (matches == 0)
			throw Intern::NoMatchException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		return (0);
	}
	return (1);
}
const char* Intern::EmptyInputException::what() const throw()
{
	return "Input can not be empty\n";
}
const char* Intern::NoMatchException::what() const throw()
{
	return "Input not matching any forms intern can find\n";
}
const char* Intern::TooAmbigousInputException::what() const throw()
{
	return "Input too ambigous to meaningfully distinguish between various forms\n";
}
AForm* Intern::makeForm(std::string name, std::string target)
{
	int i;
	for (i = 0; name[i]; i++)
	{
		name[i] = std::tolower(name[i]);
	}
	if (checkInput(name, target) == 0)
		return NULL;
	std::string FormNamesArray[3] = {"presidential pardon form", "robotomy request form", "shrubbery creation form"};
	AForm* (Intern::*formPtrs[3])(std::string) = {&Intern::makePardon, &Intern::makeRobo, &Intern::makeShrub};
	i = 0;
	while (i < 3)
	{
		if (FormNamesArray[i].find(name) != std::string::npos)
			return (this->*formPtrs[i])(target);
		i++;
	}
	return NULL;
}