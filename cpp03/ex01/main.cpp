/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:28:58 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/13 05:28:58 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("a");
	ScavTrap b("b");

	a.attack("b");
	b.takeDamage(a.getDamage());
	b.beRepaired(5);
	a.guardGate();
	return (0);
}