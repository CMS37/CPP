/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 04:16:18 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 04:16:18 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _num(0) {}

Data::Data(int num) : _num(num) {}

Data::~Data() {}

Data::Data(const Data &f)
{
	*this = f;
}

Data& Data::operator=(const Data &f)
{
	if (this != &f)
	{
		_num = f.getNum();
	}
	return (*this);
}

int	Data::getNum(void) const
{
	return (_num);
}