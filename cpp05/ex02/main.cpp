/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:23:35 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 13:37:38 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main(void)
{
	try{
		Bureaucrat bur("Alice", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
		try{
	Bureaucrat bur("Bob", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bur("Charlie", 150);
		std::cout << bur.getName() << std::endl;
		bur.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat bur("David", 1);
		std::cout << bur << std::endl;
		bur.decrementGrade();
		std::cout << bur.getGrade() << std::endl;
		bur.incrementGrade();
		std::cout << bur.getGrade() << std::endl;
		bur.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat Eve("Eve", 23);
		Bureaucrat Frank("Frank",4);
		PresidentialPardonForm P1("Arthur Dent");
		std::cout << P1 << std::endl;
		std::cout << Eve << std::endl;
		Frank.executeForm(P1);
		Eve.signForm(P1);
		Frank.signForm(P1);
		Eve.executeForm(P1);
		Frank.executeForm(P1);
		std::cout << P1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	try{
		Bureaucrat George("George", 40);
		Bureaucrat Heidi("Heidi", 76);
		RobotomyRequestForm R1("Marvin");
		std::cout << R1 << std::endl;
		Heidi.executeForm(R1);
		Heidi.signForm(R1);
		George.signForm(R1);
		Heidi.signForm(R1);
		George.executeForm(R1);
		std::cout << R1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	try{
		Bureaucrat Ivan("Ivan", 2);
		ShrubberyCreationForm S1("Home");
		std::cout << S1 << std::endl;
		Ivan.executeForm(S1);
		Ivan.signForm(S1);
		Ivan.executeForm(S1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}
