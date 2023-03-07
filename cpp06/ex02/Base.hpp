/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:49:22 by marvin            #+#    #+#             */
/*   Updated: 2023/03/07 16:05:26 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{
	public:
		virtual ~Base() {}

		static Base*	generate(void);
		static void		identify(Base *p);
		static void		identify(Base &p);
};

#endif