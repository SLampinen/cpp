/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:45:44 by slampine          #+#    #+#             */
/*   Updated: 2023/09/22 16:46:34 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>


class Contact{
	std::string	name;
	std::string getInput(std::string str);
	public:
	int			number;
	std::string	last_name;
	std::string	nickname;
	std::string	secret;
    Contact();
    ~Contact();
	void initContact(void);
};
#endif