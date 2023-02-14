/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:19:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/08 04:19:25 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <sstream>
# include <iostream>

class Replace
{
	private:

	public:
		Replace();
		~Replace();

		static std::string readFile(std::ifstream &fin);
		static void	doReplace(std::string *buf, std::string s1, std::string s2);
};

#endif