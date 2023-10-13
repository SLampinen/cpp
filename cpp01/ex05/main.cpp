/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:16:33 by slampine          #+#    #+#             */
/*   Updated: 2023/10/13 11:10:47 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// int main(void)
// {
// 	Harl harl;
// 	std::string input;
// 	do 
// 	{
// 		std::cin >> input;
// 		harl.complain(input);
// 	}
// 	while(input.compare("exit"));
// }
// main for tests
int main(void)
{
	Harl harl;
	std::cout << "Debug\n";
	harl.complain("debug");
	std::cout << "Info\n";
	harl.complain("info");
	std::cout << "Warning\n";
	harl.complain("warning");
	std::cout << "Error\n";
	harl.complain("error");
	std::cout << "No message\n";
	harl.complain("nonsense");
}