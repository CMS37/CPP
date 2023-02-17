/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:10:41 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:10:41 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &f);
		Animal&	operator=(const Animal &f);

		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;
		virtual Brain		*getBrain(void) const;
};

#endif