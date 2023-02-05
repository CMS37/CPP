/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:04:14 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 05:04:14 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << _name << "attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}
