/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:04:55 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 10:24:53 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	while (N)
	{
		N--;
		horde[N].giveName(name);
	}
	return (horde);
}
