/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:07:43 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 12:49:06 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "none";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& var) : AForm ("RobotomyRequestForm", 72, 45)
{
	this->target = var.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& var)
{
	this->target = var.target;
	return *this;
}
void RobotomyRequestForm::Action() const
{
	std::cout << "Bzzzz" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->target << " was robotomised successfully" << std::endl;
	else
		std::cout << "Robotomy on " << this->target << " failed" << std::endl;
}