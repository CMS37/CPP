/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:38 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/24 00:48:24 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANEGE_HPP
# define BITCOINEXCHANEGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>

# define BAD_INPUT 10
# define NOT_POS 11
# define BIG_NUM 12

class BitcoinExchange
{
	private:
		std::map<std::string, double> _map;
		BitcoinExchange();
	public:
		BitcoinExchange(std::string path);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &f);
		BitcoinExchange& operator=(const BitcoinExchange &f);

		void	run(std::string input);
		void	print_val(std::string line);

		std::map<std::string, double> getMap(void) const;
};

#endif