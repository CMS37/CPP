/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:28:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 11:15:35 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for(int i = 0;i < 4;i++)
		_bag[i] = NULL;
}

Character::~Character()
{
	for(int i = 0;i < 4;i++)
		delete _bag[i];
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
	if (!m)
	{
		std::cout << "Wrong Materia\n";
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i] == NULL)
		{
			_bag[i] = m;
			std::cout << _name << " equipped " << _bag[i]->getType() << std::endl;
			return ;
		}
	}
	std::cout << _name << "'s bag is full\n";
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_bag[idx] != NULL)
		{

			std::cout << _name << " unequipped " << _bag[idx]->getType() << std::endl;
			_bag[idx] = NULL;
		}
		else if (_bag[idx] == NULL)
			std::cout << idx << " slot is empty\n";

	}
	else
		std::cout << "Wrong input idx! set 0~3number\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_bag[idx] != NULL)
			_bag[idx]->use(target);
		else if (_bag[idx] == NULL)
			std::cout << idx << " slot is empty\n";
	}
	else
		std::cout << "Wrong input idx! set 0~3number\n";
}