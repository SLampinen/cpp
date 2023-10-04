/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:45:44 by slampine          #+#    #+#             */
/*   Updated: 2023/10/04 13:36:03 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <sstream>

class Contact{
	void setName(void);
	void setLastName(void);
	void setNickname(void);
	void setSecret(void);
	void setNumber(void);
	public:
    Contact();
    ~Contact();

	int			number;
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	secret;
	
	void initContact(void);
	int getNumber(void);
	std::string getName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getSecret(void);

	void show(int i);
	void printLen(std::string text);
	int onlyDigits(std::string text);
};
#endif