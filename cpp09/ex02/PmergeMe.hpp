/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:20 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/20 13:37:06 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <sstream>
# include <ctime>
# include <iomanip>

class PmergeMe
{
	private:
		size_t				_len;
		std::vector<int>	_vec;
		std::list<int>		_lst;
		// std::deque<int>		_deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &f);
		PmergeMe& operator=(const PmergeMe &f);

		void	merge_insert_sort(int ac, char **av);

		std::vector<int>	getVec(void) const;
		std::list<int>		getLst(void) const;
};

#endif