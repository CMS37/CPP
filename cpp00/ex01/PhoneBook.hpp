/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:31 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 16:03:17 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Info.hpp"

class PhoneBook 
{
	private:
		Info	info[8];

	public:
		void	setInfo(void);
		void	serchInfo(void);
};

#endif