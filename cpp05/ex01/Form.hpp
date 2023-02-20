/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 06:44:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 09:02:51 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string	_name;
		int			_gradeSign;
		int			_gradeExe;
		bool		_sign;

	public:
		Form(std::string name, int gradeSign, int gradeExe);
		~Form();
		Form(const Form &f);
		Form& operator=(const Form &f);

		void		beSigned(Bureaucrat &f);
		std::string getName(void) const;
		bool		getSign(void) const;
		int			getGradeSign(void) const;
		int			getGradeExe(void) const;

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

std::ostream& operator<<(std::ostream &o, const Form &f);

#endif