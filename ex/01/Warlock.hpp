/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:14:11 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:14:11 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock &f);
		Warlock& operator=(const Warlock &f);

	public:
		Warlock(std::string str1, std::string str2);
		~Warlock();

		void	introduce(void) const;

		void	learnSpell(Aspell* sp);
		void	forgetSpell(std::string str);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void setTitle(const std::string str);
};

#endif