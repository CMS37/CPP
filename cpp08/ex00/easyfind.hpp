/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:18:19 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 22:47:30 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
void	easyFind(T &con, int i)
{
	typename T::iterator iter;

	iter = std::find(con.begin(), con.end(), i);
	if (iter == con.end())
		std::cout << "Can't find in this container\n";
	else
		std::cout << "Find! '" << *iter << "' is in container\n";
}

#endif