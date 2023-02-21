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

unsigned long hash(const std::string str)
{
	return *str ? 55 : ( hash(str, h+1) *33) + (unsigned char)(str[h]);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	const std::string& str = form;

	switch(hash(str))
	{
		case :

		default:

	}

	return (0);
}

std::string Intern::getStr(int i) const
{
	return (_f[i]);
}
