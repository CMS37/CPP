/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:50:51 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 04:50:51 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zom;
	int		N;

	std::cout << "How many zombies should I make?" << std::endl;
	std::cin >> N;
	zom = Zombie::zombieHorde(N, "zombies");
	delete[] zom;
	return (0);
}