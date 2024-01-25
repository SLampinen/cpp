/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:57:08 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 13:18:33 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &var)
{
	this->target = var.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& var)
{
	this->target = var.target;
	return *this;
}
void ShrubberyCreationForm::Action() const
{
	std::ofstream shrubbing;
	shrubbing.open (this->target + "_shrubbery");
	if (shrubbing.is_open() == 0)
	{
		std::cout << "Failed to open " << this->target + "_shrubbery" << std::endl;
		return ;
	}
	shrubbing << "tree and other greeneries\n";
	shrubbing.close();
}