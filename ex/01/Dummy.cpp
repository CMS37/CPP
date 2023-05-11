/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:34:33 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 04:34:33 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{

}

Dummy::Dummy(const Dummy &f) : ATarget(f)
{
	*this = f;
}

Dummy& Dummy::operator=(const Dummy &f)
{
	if (this != &f)
		type = f.getType();
	return (*this);
}

ATarget*	Dummy::clone(void) const
{
	return(new Dummy(*this));
}
