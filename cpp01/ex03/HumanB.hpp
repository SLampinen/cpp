/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:16:37 by slampine          #+#    #+#             */
/*   Updated: 2023/10/09 13:30:17 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{
	private:
	std::string name;
	Weapon* weapon;

	public:
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon& weapon);
};

