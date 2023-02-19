/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 06:27:06 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:16:23 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScaveTrap " << name << " ready" <<std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " out of game" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) : ClapTrap("ScavTrap")
{
	std::cout << "Scav Copy constructor called" << std::endl;
	*this = f;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &f)
{
	std::cout << "Scav Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		_name = f.getName();
		_hitPoints = f.getHitPoints();
		_energyPoints = f.getEnergyPoints();
		_attackDamage = f.getDamage();
	}
	return (*this);
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		_energyPoints = 0;
		std::cout << "ScavTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << " hit potints"<< std::endl;
		std::cout << "ScavTrap " << _name << " die" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ScavTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << "hit potints"<< std::endl;
	}
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
	{
		std::cout << "Don't have Energy Points" << std::endl;
		return ;
	}
	else if (_hitPoints + amount > 100)
		_hitPoints = 100;
	else
		_hitPoints += amount;
	std::cout << "ScavTrap " << _name << " repair " << amount << ", left "
		<< _hitPoints << " hit points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is going to guard Gate!" << std::endl;
}
