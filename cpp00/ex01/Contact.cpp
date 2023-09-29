/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:45:41 by slampine          #+#    #+#             */
/*   Updated: 2023/09/29 12:07:30 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::getInput(std::string str)
{
	std::cout << str;
	std::string text;
	std::cin >> text;
	text = "";
	while (!std::cin.eof() && !std::cin.good() && text == "")
	{
		std::cout << "NOT VALID\n";
		std::cin >> text;
	}
	return (text);

}

void Contact::initContact(void)
{
	this->name = this->getInput("Give first name: ");
	this->last_name = this->getInput("Give last name: ");
	this->nickname = this->getInput("Give nickname: ");
	this->secret = this->getInput("Give darkest secret: ");
}
