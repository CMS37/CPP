/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:36:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 21:42:22 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}


AMateria::AMateria(std::string const &type) : _type(type)
{

}

AMateria::AMateria(const AMateria &f)
{
	*this = f;
}

AMateria& AMateria::operator=(const AMateria &f)
{
	if (this != &f)
		_type = f.getType();
}

const std::string &AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}
