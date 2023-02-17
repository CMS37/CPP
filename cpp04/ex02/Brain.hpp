/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:57:14 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/17 18:57:14 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _idea[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &f);
		Brain& operator=(const Brain &f);

		std::string	getIdea(int i) const;
		void		setIdea(std::string idea, int i);
};

#endif