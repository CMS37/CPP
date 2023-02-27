/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:06:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/27 17:20:44 by min-cho          ###   ########seoul.kr  */
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
	
	i = 0;
	while (i < 3)
	{
		if (_f[i] == form)
			return (i + 1);
		i++;
	}
	return (i + 1);
}


Form	*Intern::makeForm(std::string form, std::string target)
{
	std::cout << "Intern trying...\n";
	switch(hash(form))
	{
		case 1:
			std::cout << "Intern make ShrubberyCreationForm!\n";
			return (new ShrubberyCreationForm(target));
		case 2:
			std::cout << "Intern make RobotomyRequestForm!\n";
			return (new RobotomyRequestForm(target));
		case 3:
			std::cout << "Intern make PresidentialPardonForm!\n";
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Intern doesn't know this form...\n";
			return (NULL);
	}
}

std::string Intern::getStr(int i) const
{
	return (_f[i]);
}
