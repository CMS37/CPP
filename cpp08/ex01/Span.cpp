/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:38:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 23:38:13 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{

}

Span::~Span() {}

Span::Span(const Span &f)
{
	*this = f;
}

Span&	Span::operator=(const Span &f)
{
	_vec = f.getVector();
	_size = f.getSize();
	return (*this);
}

std::vector<int>	Span::getVector(void) const
{
	return (_vec);
}

unsigned int	Span::getSize(void) const
{
	return (_size);
}

void	Span::addNumber(int num)
{
	if (_vec.size() >= _size)
		throw SpanFull();
}

const char *Span::SpanFull::what() const throw()
{
	return ("Span is Full!");
}
