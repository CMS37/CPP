/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:17:39 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:17:39 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &f);
		Cat&	operator=(const Cat &f);

		void		makeSound(void) const;
		Brain		*getBrain(void) const;
};

#endif
