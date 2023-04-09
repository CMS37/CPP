/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:37:55 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 23:37:55 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int>	_vec;
		unsigned int		_size;
		Span();

	public:
		Span(unsigned int n);
		~Span();
		Span(const Span &f);
		Span& operator=(const Span &f);

		std::vector<int>	getVector(void) const;
		unsigned int		getSize(void) const;

		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addspan(std::vector<int> src);

		class SpanFull : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class EmptySpan : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif