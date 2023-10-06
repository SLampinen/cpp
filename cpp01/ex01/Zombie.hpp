/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:04:48 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 10:46:30 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
	std::string name;
	public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie();
	void announce(void);
	void giveName(std::string name);
};
Zombie* zombieHorde(int N, std::string name);
#endif