/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:54:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:54:34 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		ATarget();

	protected:
		std::string type;

	public:
		ATarget(std::string str);
		virtual ~ATarget();
		ATarget(const ATarget &f);
		ATarget& operator=(const ATarget &f);

		void	getHitBySpell(const ASpell &f) const;

		virtual ATarget* clone(void) const = 0;

		std::string getType(void) const;

		void	setType(std::string str);
};

#endif