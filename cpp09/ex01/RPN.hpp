/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 03:04:40 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/15 03:04:40 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>

class RPN
{
	private:
		std::stack<int> _s;

	public:
		RPN();
		~RPN();
		RPN(const RPN &f);
		RPN& operator=(const RPN &f);

		std::stack<int>	getStack(void) const;

		void	calculate(std::string str);
};

#endif