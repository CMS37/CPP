/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:00:49 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/17 19:00:49 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &f)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_idea[i] = f.getIdea(i);
}

Brain& Brain::operator=(const Brain &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	return (_idea[i]);
}

void	Brain::setIdea(std::string idea, int i)
{
	_idea[i] = idea;
}