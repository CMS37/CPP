/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:17:06 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:17:06 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &f);
		Dog&	operator=(const Dog &f);

		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
