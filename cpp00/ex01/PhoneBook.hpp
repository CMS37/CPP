/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:31 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/27 21:47:22 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>

class PhoneBook {

private:
	std::string	*first_name;
	std::string	*last_name;
	std::string	*nickname;
	std::string	*secret;
	std::string	*phone_num;

public:

	int	add(int n);

};

#endif