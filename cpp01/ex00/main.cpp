/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:56:52 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 09:54:37 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombi("max");
	zombi.announce();
	Zombie *zombi2 = newZombie("Sue");
	zombi2->announce();
	randomChump("Rand");
	delete zombi2;
}
