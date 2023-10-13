/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:16:42 by slampine          #+#    #+#             */
/*   Updated: 2023/10/09 13:34:40 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{
	private:
	std::string type;

	public:
	Weapon(std::string type);
	~Weapon();

	const std::string& getType(void);
	void setType(std::string newType);
};

#endif