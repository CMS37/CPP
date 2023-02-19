/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:50:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:42:47 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " ready" <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " out of game" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = f;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &f)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		_name = f.getName();
		_hitPoints = f.getHitPoints();
		_energyPoints = f.getEnergyPoints();
		_attackDamage = f.getDamage();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << _name << " Don't have Energy Points" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target 
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		_energyPoints = 0;
		std::cout << "ClapTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << " hit potints"<< std::endl;
		std::cout << "ClapTrap " << _name << " die" << std::endl;
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
		std::cout << _name << " Don't have Energy Points" << std::endl;
		return ;
	}
	else if (_hitPoints + amount > 10)
		_hitPoints = 10;
	else
		_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repair " << amount << ", left "
		<< _hitPoints << " hit points" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (_attackDamage);
}
