/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:23:35 by slampine          #+#    #+#             */
/*   Updated: 2023/12/15 13:23:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void)
{
	std::cout << "Creatign bureaucrat with grade 151\n";
	try{
	Bureaucrat bur("Alice", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Creating bureaucrat with grade 0\n";
	try{
	Bureaucrat bur("Bob", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Creating bureaucrat with grade 150\n";
	try{
	Bureaucrat Charlie("Charlie", 150);
	std::cout << "Bureaucrats name is ";
	std::cout << Charlie.getName() << std::endl;
	std::cout << "Decreasing grade\n";
	Charlie.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Creating bureaucrat with grade 1\n";
	try{
	Bureaucrat David("David", 1);
	std::cout << "Bureaucrats name is ";
	std::cout << David << std::endl;
	std::cout << "Decreasing grade\n";
	David.decrementGrade();
	std::cout << David.getGrade() << std::endl;
	std::cout << "Increasing grade\n";
	David.incrementGrade();
	std::cout << David.getGrade() << std::endl;
	std::cout << "Increasing grade\n";
	David.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
