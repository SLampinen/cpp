/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:45:56 by slampine          #+#    #+#             */
/*   Updated: 2023/09/27 10:16:01 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook{
	public:
    Phonebook();
    ~Phonebook();
	Contact contacts[8];
	void init(void);
	void add(void);
	void search(void);
};

#endif