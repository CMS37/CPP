/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:28:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 22:03:44 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) : _name(name)
{

}

Character::~Character()
{
	
}

Character::Character(const Character &f)
{
	*this = f;
}

Character& Character::operator=(const Character &f)
{
	if (this != &f)
		_name = f.getName();
	return (*this);
}

std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{
	
}