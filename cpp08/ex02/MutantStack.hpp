/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:15:33 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/23 19:15:34 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(){}
		~MutantStack() {}
		MutantStack(const MutantStack &f)
		{
			*this = f;
		}
		MutantStack& operator=(const MutantStack &f)
		{
			*this = f;
		}
		
		iterator begin(void)
		{
			return(this->c.begin());
		}
		iterator end(void)
		{
			return(this->c.end());
		}
};

/*
 stack안애 c로 맴버호출하면  deque맴버함수들을 호출할수있음
 stack 라이브러리중 일부 - this->c = deque
template<class _Ty,
	class _Container = deque<_Ty> >
	class stack
	{ 
    // ...
    
    protected:
	_Container c;	// the underlying container
};


*/

#endif