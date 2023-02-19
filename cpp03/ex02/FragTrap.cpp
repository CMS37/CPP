/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:57:00 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:46:02 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " ready" <<std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " out of game" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap("FragTrap")
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = f;
}

FragTrap& FragTrap::operator=(const FragTrap &f)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		_name = f.getName();
		_hitPoints = f.getHitPoints();
		_energyPoints = f.getEnergyPoints();
		_attackDamage = f.getDamage();
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
		std::cout << "Don't have Energy Points" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target 
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		_energyPoints = 0;
		std::cout << "FragTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << " hit potints"<< std::endl;
		std::cout << "FragTrap " << _name << " die" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "FragTrap " << _name << " take " 
			<< amount << " Damage, left " << _hitPoints << "hit potints"<< std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "FragTrap " << _name << " repair " << amount << ", left "
		<< _hitPoints << " hit points" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " High Five!" << std::endl;
}
