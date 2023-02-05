/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:41:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 04:41:21 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zom = new Zombie[N];
	int		i;

	i = 0;
	while (i < N)
	{
		zom[i]._name = name;
		zom[i].announce();
		i++;
	}
}