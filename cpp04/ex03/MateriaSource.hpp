/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:30:40 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 10:22:00 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_slot[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &f);
		MateriaSource& operator=(const MateriaSource &f);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif