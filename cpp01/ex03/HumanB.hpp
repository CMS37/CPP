/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:04:22 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 05:04:22 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon *weapon);
};

#endif