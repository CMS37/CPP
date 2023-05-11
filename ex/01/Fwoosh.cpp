/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:49:48 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:49:48 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

Fwoosh::Fwoosh(const Fwoosh &f) : ASpell(f)
{
	*this = f;
}

Fwoosh& Fwoosh::operator=(const Fwoosh &f)
{
	if (this != &f)
	{
		this->name = f.getName();
		this->effects = f.getEffects();
	}
	return (*this);
}

ASpell*	Fwoosh::clone(void) const
{
	return(new Fwoosh(*this));
}