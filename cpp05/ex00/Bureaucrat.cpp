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

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		Bureaucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
	_name = f.getName();
	_grade = f.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &f)
{
	if (this != &f)
	{
		_name = f.getName();
		_grade = f.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &f)
{
	o << f.getName();
	o << ", bureaucrat grade ";
	o << f.getGrade();
	return (o);
}