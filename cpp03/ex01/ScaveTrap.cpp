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

#include "ScaveTrap.hpp"

ScaveTrap::ScaveTrap(std::string name)
{
	std::cout << "ScaveTrap " << name << " ready" <<std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScaveTrap::~ScaveTrap()
{

}