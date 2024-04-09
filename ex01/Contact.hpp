/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:12:48 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/09 19:00:22 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <unistd.h>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		std::string	getContactInfo(size_t type);
		std::string	&setContactInfo(size_t type);
		bool		setContact(void);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

bool	onlyDigit(std::string str);
bool	onlyWhiteSpaces(std::string str);
# endif