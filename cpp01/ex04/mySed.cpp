/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:57:55 by slampine          #+#    #+#             */
/*   Updated: 2023/10/12 13:56:35 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

mySed::mySed(std::string filename) : inFile(filename)
{
	this->outFile = this->inFile + ".replace";
}
mySed::~mySed()
{

}
void mySed::myReplace(std::string s1, std::string s2)
{
	 std::ifstream inf(this->inFile);
	 if (!inf.is_open())
	 {
		std::cout << "could not open " << inFile << '\n';
		return ;
	 }
	 if (s1.empty())
	 {
		std::cout << "string to be replaced can't be empty\n";
		return ;
	 }
	std::string line;
	std::getline(inf, line, '\0');
	 if (line.empty())
	 {
		std::cout << inFile << " is empty\n";
	 	std::ofstream outf(this->outFile);
	 	outf.close();
		return ;
	 }
	 size_t pos;
	 pos = line.find(s1);
	 while (pos != std::string::npos)
	 {
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	 	pos = line.find(s1, pos + s2.length());
	 }
	 std::ofstream outf(this->outFile);
	 outf << line;
	 outf.close();
}