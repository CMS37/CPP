/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:50:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/13 05:50:38 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " out of game" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " ready" <<std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "Don't have Energy Points" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target 
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << "die" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << "hit potints"<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << "ClapTrap " << _name << " repair " << amount << ", left "
		<< _hitPoints << "hit points" << std::endl;
}

unsigned int	ClapTrap::getDamage(void)
{
	return (_attackDamage);
}
