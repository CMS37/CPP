/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:02:04 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 11:10:08 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &f)
{
	*this = f;
}

Cure& Cure::operator=(const Cure &f)
{
	if (this != &f)
		_type = f.getType();
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}