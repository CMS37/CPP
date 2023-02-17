/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:58:43 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/17 20:58:43 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &f);
		Bureaucrat& operator=(const Bureaucrat &f);

		std::string getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Too high grade");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Too low grade");
				}
		};
};

std::ostream& operator<<(std::ostream &o, const Bureaucrat &f);

#endif