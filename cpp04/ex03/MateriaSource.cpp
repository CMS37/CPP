/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:31:30 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 14:56:35 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _slot[i];
}

MateriaSource::MateriaSource(const MateriaSource &f)
{
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
	*this = f;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &f)
{
	if(this != &f)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_slot[i] != NULL)
			{
				delete _slot[i];
				_slot[i] = NULL;
			}
			_slot[i] = f._slot[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* type)
{
	static int i = 0;

	if (i < 4)
	{
		_slot[i] = type;
		std::cout << "learn Materia " << _slot[i]->getType() << std::endl;
		i++;
	}
	else
		std::cout << "Can't learn more Materia\n";
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_slot[i] && _slot[i]->getType() == type)
			return (_slot[i]->clone());
	}
	std::cout << "Wrong type....You can create Ice or Cure!\n";

	return (NULL);
}	