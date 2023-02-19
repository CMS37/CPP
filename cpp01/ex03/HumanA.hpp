/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:04:06 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 20:05:51 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_weapon;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();

		void	attack();
};

#endif