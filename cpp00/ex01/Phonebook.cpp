/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:43:25 by slampine          #+#    #+#             */
/*   Updated: 2023/10/04 13:58:33 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{
	
}

void Phonebook::menu(void) 
{
	std::cout << "to add a contact type ADD\n";
	std::cout << "to search existing contact type SEARCH\n";
	std::cout << "to exit type EXIT\n";
}
void Phonebook::add(void)
{
	static int i;
	this->contacts[i].initContact();
	i++;
	i %= 8;
}
void Phonebook::search(int num)
{
num++;
}

void Phonebook::display(void)
{
	std::string text;
	int num;
	int maxindex;
	bool valid;
	valid = 0;
	maxindex = 0;
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|----------|----------|----------|----------|\n";
	for(int i = 0; i < 8; i++)
	{
		this->contacts[i].show(i);
	}
	if (this->contacts[0].getName() == "")
		return ;
	std::cout << "Enter index\n";
	while (contacts[maxindex].getName() != "")
	{
		maxindex++;
	}
	do 
	{
		std::getline(std::cin, text);
		if (text.empty() == 0 && contacts->onlyDigits(text))
		{
			std::istringstream(text) >> num;
			if (num >= 0 && num < maxindex)
				valid = 1;
		}
	} while (!valid);
	this->search(num);
}
void Phonebook::print(std::string text)
{
	std::cout << text;
}