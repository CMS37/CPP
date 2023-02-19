/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:28:58 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:41:14 by min-cho          ###   ########.fr       */
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
