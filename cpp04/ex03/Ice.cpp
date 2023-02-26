/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:54:10 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 11:10:59 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &f)
{
	*this = f;
}

Ice& Ice::operator=(const Ice &f)
{
	if (this != &f)
		_type = f.getType();
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; 
}