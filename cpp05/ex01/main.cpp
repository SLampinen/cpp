/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:23:35 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 09:47:20 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
	// try{
	// 	Bureaucrat bur("Alice", 151);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try{
	// 	Bureaucrat bur("Bob", 0);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try{
	// 	Bureaucrat Charlie("Charlie", 150);
	// 	std::cout << Charlie.getName() << std::endl;
	// 	Charlie.decrementGrade();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try{
	// 	Bureaucrat David("David", 1);
	// 	std::cout << David << std::endl;
	// 	David.decrementGrade();
	// 	std::cout << David.getGrade() << std::endl;
	// 	David.incrementGrade();
	// 	std::cout << David.getGrade() << std::endl;
	// 	David.incrementGrade();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	try{
		Bureaucrat Eve("Eve", 5);
		Bureaucrat Frank("Frank",1);
		Form M1("M1",2,10);
		std::cout << M1 << std::endl;
		std::cout << Eve << std::endl;
		std::cout << Frank << std::endl;
		Eve.signForm(M1);
		Frank.signForm(M1);
		Frank.signForm(M1);
		Eve.signForm(M1);
		std::cout << M1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// try{
	// 	Form M2("M2", 0, 5);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// try{
	// 	Form M3("M3", 151, 0);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}
