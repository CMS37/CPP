/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:30:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/08 04:30:38 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{

}

Replace::~Replace()
{

}

std::string	Replace::readFile(std::ifstream &fin)
{
	std::stringstream buf;
	buf << fin.rdbuf();
	return (buf.str());
}

void	Replace::doReplace(std::string *buf, std::string s1, std::string s2)
{
	int len_buf = buf->length();
	int len_s1 = s1.length();

	while (1)
	{
		std::size_t found = buf->find(s1);
		if (found == std::string::npos) // find()함수에 의해서 찾지못하면 npos(-1)값을 리턴
			return ;
		std::string tmp1 = buf->substr(0, found);
		std::string tmp2 = buf->substr(found + len_s1, len_buf);
		*buf = tmp1 + s2 + tmp2;
	}
}
