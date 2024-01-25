/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:13:09 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 12:26:52 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "none";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& var) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = var.target;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &var)
{
	this->target = var.target;
	return *this;
}
void PresidentialPardonForm::Action() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}