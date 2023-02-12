/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaveTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 06:27:13 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/13 06:27:13 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVETRAP_HPP
# define SCAVETRAP_HPP

# include "ClapTrap.hpp"

class ScaveTrap : public ClapTrap
{
	public:
		ScaveTrap(std::string name);
		~ScaveTrap();
		
};

#endif