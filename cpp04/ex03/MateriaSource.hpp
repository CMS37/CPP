/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:30:40 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 21:39:45 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &f);
		MateriaSource& operator=(const MateriaSource &f);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif