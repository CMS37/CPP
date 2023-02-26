/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:51:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 11:11:12 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice() {}
		Ice(const Ice &f);
		Ice& operator=(const Ice &f);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif