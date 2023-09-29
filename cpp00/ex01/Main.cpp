/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:52:01 by slampine          #+#    #+#             */
/*   Updated: 2023/09/29 09:12:47 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
	Phonebook book;
	std::cout << "\nAwesome Phonebook\n";
	std::string input = "";
	while (!std::cin.eof() && input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
		{
			book.add();
		}
		if (input.compare("SEARCH") == 0)
		{
			book.search();
		}
	std::cout << "\n";
	book.init();
	std::cin >> input;
	}
}