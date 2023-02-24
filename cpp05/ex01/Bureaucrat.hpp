/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:58:43 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 08:33:05 by min-cho          ###   ########.fr       */
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
		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &f);
		Bureaucrat& operator=(const Bureaucrat &f);

		std::string getName(void) const;
		int			getGrade(void) const;
		void		gradeUp(void);
		void		gradeDown(void);
		void		signForm(bool sign, std::string name);


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