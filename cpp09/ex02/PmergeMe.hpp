/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:20 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/20 10:17:55 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <array>
# include <list>
# include <sstream>

class PmergeMe
{
	private:
		size_t				_len;
		std::vector<int>	_vec;
		std::list<int>		_lst;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &f);
		PmergeMe& operator=(const PmergeMe &f);

		void	merge(int ac, char **av);
};

#endif