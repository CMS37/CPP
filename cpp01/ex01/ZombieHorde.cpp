/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:41:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 18:26:45 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zom = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zom[i]._name = name;
		zom[i].announce();
	}
	return (zom);
}