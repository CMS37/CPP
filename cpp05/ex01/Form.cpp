/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:59:00 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 09:02:48 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExe) : 
	_name(name), _gradeSign(gradeSign), _gradeExe(gradeExe), _sign(false)
{
	if (gradeSign < 1 || gradeExe < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExe > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form::Form(const Form &f)
{
	*this = f;
}

Form& Form::operator=(const Form &f)
{
	if (this != &f)
	{
		_name = f.getName();
		_gradeSign = f.getGradeSign();
		_gradeExe = f.getGradeExe();
		_sign = f.getSign();
	}
	return (*this);
}

void	Form::beSigned(Bureaucrat &f)
{
	if (f.getGrade() <= _gradeSign)
		_sign = true;
	else
		throw Form::GradeTooLowException();
	f.signForm(_sign, _name);
}

std::string Form::getName(void) const
{
	return (_name);
}

int	Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int	Form::getGradeExe(void) const
{
	return (_gradeExe);
}

bool	Form::getSign(void) const
{
	return (_sign);
}

std::ostream& operator<<(std::ostream &o, const Form &f)
{
	o << f.getName();
	o << ", Sign grade : ";
	o << f.getGradeSign();
	o << ", Execute grade : ";
	o << f.getGradeExe();
	if (f.getSign())
		o << " | approve |";
	else
		o << " | rejected |";	
	return (o);
}