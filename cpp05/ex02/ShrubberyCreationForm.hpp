/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:57:11 by slampine          #+#    #+#             */
/*   Updated: 2024/01/22 12:05:33 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFROM_HPP
# include "AForm.hpp"
class ShrubberyCreationForm : public AForm{
	private:
	std::string target;
	
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &var);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& var);
	void Action() const;
};

#endif
