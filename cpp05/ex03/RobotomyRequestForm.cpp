/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:00:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/27 17:33:45 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) :
	Form("RobotomyRequestForm", 72, 45)
{
	*this = f;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	if (this != &f)
		_target = f.getTarget();
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExe)
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		int i;

		srand(time(NULL));
		i = rand();
		std::cout << "Drrrrrr.....\n";
		if (i % 2 == 0)
			std::cout << _target << " Robot Evolution Successful!!\n";
		else
			std::cout << _target << " Robot Evolution Fail...\n";
	}
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	_target = target;
}