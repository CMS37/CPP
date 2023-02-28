/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:03:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 11:11:18 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure() {}
		Cure(const Cure &f);
		Cure& operator=(const Cure &f);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif