/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:46:52 by slampine          #+#    #+#             */
/*   Updated: 2023/10/12 12:27:00 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class mySed{
	private:
	std::string inFile;
	std::string outFile;

	public:
	mySed(std::string filename);
	~mySed();

	void myReplace(std::string s1, std::string s2);
};