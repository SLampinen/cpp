/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:46:35 by slampine          #+#    #+#             */
/*   Updated: 2023/10/13 09:13:18 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

// int main (int argc, char **argv)
// {
// 	if (argc != 4)
// 	{
// 		std::cout << "USAGE: infile 'string to replace' ' string to replace with' \n";
// 		return (0);
// 	}
// 	mySed newSed(argv[1]);
// 	newSed.myReplace(argv[2], argv[3]);
// }
// Main for testing
int main(void)
{
	// if s1 is empty
	mySed newSed("infile");
	newSed.myReplace("", "new");

	// if file is empty
	mySed newSed2("empty");
	newSed2.myReplace("test", "new");

	// if no file
	mySed newSed3("nofile");
	newSed3.myReplace("test", "new");

	// if all works
	 mySed newSed4("works");
	newSed4.myReplace("test", "new");

	// if s1 and s2 are same
	mySed newSed5("same");
	newSed5.myReplace("test", "test");

// if s2 contains s1
	mySed newSed6("contains");
	newSed6.myReplace("test", "newtest");
}