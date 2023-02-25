/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:01:04 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 18:40:58 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) :
	Form("ShrubberyCreationForm", 145, 137)
{
	*this = f;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	if (this != &f)
		_target = f.getTarget();
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExe)
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		std::ofstream fout(_target + "_shruberry");
		if (fout.is_open())
		{
			fout << "           (대충 트리였던것)\n         (대충 트리였던것)(대충 트리였던것)\n(대충 트리였던것)(대충 트리였던것)(대충 트리였던것)\n";
			fout.close();
		}
	}
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	_target = target;
}