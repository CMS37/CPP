/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:19:37 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:19:37 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "A Wild Cat Appears" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is gone..." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwww" << std::endl;
}

std::string Cat::getType(void) const
{
	return (_type);
}