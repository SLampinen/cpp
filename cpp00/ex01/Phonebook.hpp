/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:45:56 by slampine          #+#    #+#             */
/*   Updated: 2023/10/04 14:04:56 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

class Phonebook{
	public:
    Phonebook();
    ~Phonebook();

	Contact contacts[8];

	void menu(void);
	void add(void);
	void display(void);
	void search(int num);
};

#endif