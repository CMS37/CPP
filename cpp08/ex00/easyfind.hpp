/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:12:24 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/23 19:12:28 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>

class NoFind : public std::exception
{
	public:
		const char * what(void) const throw()
		{
			return ("No Find!");
		}
};


template <typename T>
int	easyFind(T &con, int i)
{
	typename T::iterator iter = con.begin();

	for(;iter != con.end(); ++iter)
	{
		if (*iter == i)
			return (*iter);
	}
	throw NoFind();
}

#endif