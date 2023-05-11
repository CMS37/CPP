/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:39:16 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:39:16 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string str1, std::string str2) : name(str1), effects(str2)
{

}

ASpell::~ASpell()
{

}

ASpell::ASpell(const ASpell &f)
{
	*this = f;
}

ASpell&	ASpell::operator=(const ASpell &f)
{
	if (this != &f)
	{
		name = f.getName();
		effects = f.getEffects();
	}
	return (*this);
}

void	ASpell::launch(const ATarget &f) const
{
	f.getHitBySpell(*this);
}


std::string ASpell::getName(void) const
{
	return (name);
}

std::string	ASpell::getEffects(void) const
{
	return (effects);
}

void	ASpell::setName(std::string str)
{
	this->name = str;
}

void	ASpell::setEffects(std::string str)
{
	this->effects = str;
}