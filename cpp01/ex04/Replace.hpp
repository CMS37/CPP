/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:19:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 20:20:40 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <sstream>
# include <iostream>

class Replace
{
	public:
		Replace();
		~Replace();

		static std::string readFile(std::ifstream &fin);
		static void	doReplace(std::string *buf, std::string s1, std::string s2);
};

#endif