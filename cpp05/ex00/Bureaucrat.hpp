/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:23:48 by slampine          #+#    #+#             */
/*   Updated: 2023/10/26 13:58:00 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
class Bureaucrat{
	private:
	const std::string name;
	int grade;

	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat (const Bureaucrat &var);
	Bureaucrat& operator=(const Bureaucrat& var);
	std::string getName()const;
	int getGrade()const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public  std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public  std::exception
	{
		public:
		virtual const char* what() const throw();
	};
};
std::ostream & operator<<( std::ostream & o, Bureaucrat const & var);
#endif
