/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:58:05 by slampine          #+#    #+#             */
/*   Updated: 2023/10/06 12:24:59 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of str is       " << &str << '\n';
	std::cout << "address of stringPTR is " << &stringPTR << '\n';
	std::cout << "address of stringREF is " << &stringREF << '\n';

	std::cout << "value of str is       " << str << '\n';
	std::cout << "value of stringPTR is " << *stringPTR << '\n';
	std::cout << "value of stringRED is " << stringREF << '\n';
}
