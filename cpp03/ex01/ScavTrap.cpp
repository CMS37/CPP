/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaveTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 06:27:06 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/13 06:27:06 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " out of game" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScaveTrap " << name << " ready" <<std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "Don't have Energy Points" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target 
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
	{
		std::cout << "Don't have Energy Points" << std::endl;
		return ;
	}
	else if (_hitPoints + amount > 10)
		_hitPoints = 10;
	else
		_hitPoints += amount;
	std::cout << "ScavTrap " << _name << " repair " << amount << ", left "
		<< _hitPoints << "hit points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is going to guard Gate!" << std::endl;
}