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

		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const;
		virtual Brain		*getBrain(void) const = 0;
};

//virtual = 파생클래스에서 재정의할 수도있는 가상맴버함수
//pure virtual (= 0) = 파생클래스에서 반드시 재정의를 해야 사용할 수 있는 함수

#endif