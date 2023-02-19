/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:50:51 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 19:56:05 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*zom;
	int		N;

	std::cout << "How many zombies should I make?" << std::endl;
	std::cin >> N;
	zom = Zombie::zombieHorde(N, "zombie");
	delete[] zom;
	return (0);
}