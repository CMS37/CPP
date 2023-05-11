/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:09:42 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 04:09:42 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string str) : type(str)
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget(const ATarget &f)
{
	*this = f;
}


ATarget&	ATarget::operator=(const ATarget &f)
{
	if (this != &f)
		type = f.getType();
	return (*this);
}

void	ATarget::getHitBySpell(const ASpell &f) const
{
	std::cout << type << " has been " << f.getEffects() << "!\n";
}

std::string	ATarget::getType(void) const
{
	return (type);
}

void	ATarget::setType(std::string str)
{
	this->type = str;
}