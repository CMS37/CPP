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

class Bureacrat
{
	private:
		std::string	_name;
		int			_grade;

	public:
		Bureacrat(std::string name, int grade);
		~Bureacrat();
		Bureacrat(const Bureacrat &f);
		Bureacrat& operator=(const Bureacrat &f);

		std::string getName(void) const;
		int			getGrade(void) const;
};

std::ostream& operator<<(std::ostream &o, const Bureacrat &f);

#endif