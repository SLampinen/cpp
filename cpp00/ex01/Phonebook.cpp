/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:43:25 by slampine          #+#    #+#             */
/*   Updated: 2023/09/29 08:58:58 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{
	
}

void Phonebook::init(void) 
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
	std::cout << "\n" << i;
}
void Phonebook::search(void)
{
	
}
