/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:46:30 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/03 19:04:32 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <string>
# include <iostream>
# include <Contact.hpp>

class	PhoneBook {
	private:
		Contact contacts[8];
		size_t	index;
		size_t	capacity;
	public:
		Contact	setContact(void);
		Contact	getContact(size_t index);
		PhoneBook(void);
		~PhoneBook(void);
};

void	addContact(PhoneBook phonebook);

#endif
