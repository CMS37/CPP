/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:59:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 10:59:46 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) :
	Form("PresidentialPardonForm", 25, 5)
{
	*this = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	if (this != &f)
		_target = f.getTarget();
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExe)
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << "The president pardons " << _target << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	_target = target;
}