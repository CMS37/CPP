/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:13:10 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 04:13:10 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zom = Zombie::newZombie("zom1"); //동적할당 (힙)
	Zombie	zom1("zom2"); //정적할당 (스택)

	zom->announce();
	zom1.announce();

	delete zom;

	Zombie::randomChump("zom3");

	return (0);
}