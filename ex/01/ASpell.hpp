/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:39:30 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:39:30 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ASpell
{
	private:
		ASpell();

	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(std::string str1, std::string str2);
		virtual ~ASpell();
		ASpell(const ASpell &f);
		ASpell& operator=(const ASpell &f);

		void	launch(const ATarget &f) const;

		virtual ASpell* clone(void) const = 0;

		std::string getName(void) const;
		std::string getEffects(void) const;

		void	setName(std::string str);
		void	setEffects(std::string str);

};

#endif