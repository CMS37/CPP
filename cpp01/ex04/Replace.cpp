/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:30:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 20:57:38 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace() {}

Replace::~Replace() {}

std::string	Replace::readFile(std::ifstream& fin)
{
	std::stringstream buf;
	buf << fin.rdbuf();
	return (buf.str());
}

void	Replace::doReplace(std::string *buf, std::string s1, std::string s2)
{
	std::size_t index;

	index = 0;
	while (1)
	{
		index = buf->find(s1, index);
		if (index == std::string::npos) // find()함수에 의해서 찾지못하면 npos(-1)값을 리턴
			break ;
		std::string tmp1 = buf->substr(0, index);
		std::string tmp2 = buf->substr(index + s1.length(), buf->length());
		*buf = tmp1 + s2 + tmp2;
		index += s2.length();
	}
}
