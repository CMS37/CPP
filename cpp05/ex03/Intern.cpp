/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:06:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/21 15:06:38 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	_f[0] = "shrubbery creation";
	_f[1] = "robotomy request";
	_f[2] = "presidential pardon";
}

Intern::~Intern() {}

Intern::Intern(const Intern &f)
{
	*this = f;
}

Intern& Intern::operator=(const Intern &f)
{
	if (this != &f)
	{
		_f[0] = f.getStr(0);
		_f[1] = f.getStr(1);
		_f[2] = f.getStr(2);
	}
	return *this;
}

int Intern::hash(std::string form)
{
	int i;

	while (i < 3)
	{
		if (_f[i] == form)
			return (i);
		i++;
	}
	return (i);
}


Form	*Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern trying...\n";
	Form	*_form;

	switch(hash(form))
	{
		case 1:
			_form = new ShrubberyCreationForm(target);
			std::cout << "Completed the ShrubberyCreationForm\n";
			break;
		case 2:
			_form = new RobotomyRequestForm(target);
			std::cout << "Completed the RobotomyRequestForm\n";
			break;
		case 3:
			_form = new PresidentialPardonForm(target);
			std::cout << "Completed the PresidentialPardonForm\n";
			break;
		default:
			_form = NULL;
			std::cout << "Intern doesn't know this form...\n";
			break;
	}
	return (_form);
}

std::string Intern::getStr(int i) const
{
	return (_f[i]);
}
