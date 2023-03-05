/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:49:22 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 17:49:22 by marvin           ###   ########seoul.kr  */
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
		virtual ~Base();

		static Base*	generate(void);
		static void		identify(Base *p);
		static void		identify(Base &p);
};

#endif