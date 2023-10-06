/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:57:07 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 09:32:39 by slampine         ###   ########.fr       */
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
	~Zombie();
	void announce(void);
};
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
#endif