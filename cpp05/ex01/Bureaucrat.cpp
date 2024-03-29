/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:59:00 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 09:07:00 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
	*this = f;
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

void	Bureaucrat::gradeUp(void)
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::gradeDown(void)
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(bool sign, std::string name)
{
	if (sign)
		std::cout << _name << " signed " << name << std::endl;
	else
		std::cout << _name << " couldn’t sign " << name << " because " << 
			_name << "'s grade is low then " << name << "'s grade\n";
}


std::ostream& operator<<(std::ostream &o, const Bureaucrat &f)
{
	o << f.getName();
	o << ", bureaucrat grade ";
	o << f.getGrade();
	return (o);
}