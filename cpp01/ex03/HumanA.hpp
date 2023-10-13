/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:16:32 by slampine          #+#    #+#             */
/*   Updated: 2023/10/09 13:23:53 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
	private:
	std::string name;
	Weapon& weapon;

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void);
};