/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:20 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/19 20:29:29 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

class PmergeMe
{
	private:

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &f);
		PmergeMe& operator=(const PmergeMe &f);
};

#endif