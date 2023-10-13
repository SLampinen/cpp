/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:16:13 by slampine          #+#    #+#             */
/*   Updated: 2023/10/09 13:34:49 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}
Weapon::~Weapon()
{

}
const std::string& Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}