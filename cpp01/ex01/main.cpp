/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:00:05 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 11:12:12 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "Max");
	int i = 0;
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete (horde);
	return (0);
}
 