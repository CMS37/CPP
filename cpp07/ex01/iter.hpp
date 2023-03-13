/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:49:04 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 20:41:26 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *p, int len, void (*f)(T &a))
{
	for(int i = 0; i < len; i++)
		(*f)(p[i]);
}

template <typename T>
void	test(T &a)
{
	std::cout << a << std::endl;
}


#endif