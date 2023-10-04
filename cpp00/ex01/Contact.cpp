/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:45:41 by slampine          #+#    #+#             */
/*   Updated: 2023/10/04 13:43:43 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void Contact::initContact(void)
{
	std::cout << "Give first name\n";
	this->setName();
	std::cout << "Give last name\n";
	this->setLastName();
	std::cout << "Give nickname\n";
	this->setNickname();
	std::cout << "Give darkest secret\n";
	this->setSecret();
	std::cout << "Give phone number\n";
	this->setNumber();
}
std::string Contact::getName(void)
{
	return (this->name);
}
std::string Contact::getLastName(void)
{
	return (this->last_name);
}
std::string Contact::getNickname(void)
{
	return (this->nickname);
}
std::string Contact::getSecret(void)
{
	return (this->secret);
}
int Contact::getNumber(void)
{
	return (this->number);
}
void Contact::setName(void)
{
	std::string text;
	bool valid;
	valid = 0;
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0)
		{
			valid = 1;
		}
	} while (!valid);
	this->name = text;
}
void Contact::setLastName(void)
{
	std::string text;
	bool valid;
	valid = 0;
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0)
		{
			valid = 1;
		}
	} while (!valid);
	this->last_name = text;
}
void Contact::setSecret(void)
{
	std::string text;
	bool valid;
	valid = 0;
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0)
		{
			valid = 1;
		}
	} while (!valid);
	this->secret = text;
}
void Contact::setNickname(void)
{
	std::string text;
	bool valid;
	valid = 0;
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0)
		{
			valid = 1;
		}
	} while (!valid);
	this->nickname = text;
}
void Contact::setNumber(void)
{
	std::string text;
	int num;
	bool valid;
	valid = 0;
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0 && onlyDigits(text))
		{
			valid = 1;
		}
	} while (!valid);
	std::istringstream(text) >> num;
	this->number = num;
}
void Contact::show(int i)
{
	if (this->name.empty() == 1)
		return ;
	std::cout << "|         " << i << "|";
	this->printLen(getName());
	this->printLen(getLastName());
	this->printLen(getNickname());
	std::cout << std::endl;
}
int Contact::onlyDigits(std::string text)
{
	int i;
	i = 0;
	while (text[i])
	{
		if (std::isdigit(text[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
void Contact::printLen(std::string text)
{
	int len;
	int i;

	i = 0;
	len = text.length();
	if (len > 10)
	{
		while (i < 9)
		{
			std::cout << text[i];
			i++;
		}
		std::cout << ".|";
	}
	else
	{
		while (i + len < 10)
		{
			std::cout << " ";
			i++;
		}
		std::cout << text << "|";
	}
}