/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:03:58 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 05:03:58 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name, Weapon *weapon)
{
	_name = name;
	_weapon = weapon;
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << "attacks with his " << _weapon->getType() << std::endl;
}