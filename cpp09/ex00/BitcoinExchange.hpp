/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/13 20:34:38 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANEGE_HPP
# define BITCOINEXCHANEGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <list>
# include <cstdlib>
# include <sstream>
# include <iomanip>

# define BAD_INPUT 10
# define NOT_POS 11
# define BIG_NUM 12

class BitcoinExchange
{
	private:

	public:
		BitcoinExchange();
		~BitcoinExchange();

		void run(std::string file);
};

#endif