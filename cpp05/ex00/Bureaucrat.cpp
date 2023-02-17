/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:59:00 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/17 20:59:00 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureacrat::Bureacrat(std::string name, int grade)
{
	_name = name;
	_grade = grade;
}

Bureacrat::~Bureacrat()
{

}

Bureacrat::Bureacrat(const Bureacrat &f)
{
	_name = f.getName();
	_grade = f.getGrade();
}

Bureacrat& Bureacrat::operator=(const Bureacrat &f)
{
	if (this != &f)
	{
		_name = f.getName();
		_grade = f.getGrade();
	}
	return (*this);
}

std::string Bureacrat::getName(void) const
{
	return (_name);
}

int	Bureacrat::getGrade(void) const
{
	return (_grade);
}