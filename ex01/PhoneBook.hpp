/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:46:30 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/05 16:54:54 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <Contact.hpp>

class	PhoneBook {
	private:
		Contact contacts[8];
		size_t	index;
		size_t	capacity;
	public:
		Contact	&setContact(void);
		Contact	getContact(size_t index);
		size_t	getCapacity(void);
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
