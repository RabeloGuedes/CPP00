/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:12:29 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/11 18:45:39 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(void) {

}

Contact::~Contact() {
	
}

std::string	&Contact::setContactInfo(size_t type) {
	switch (type)
	{
	case 0:
		std::cout << "First Name: " << std::endl;
		return (this->firstName);
	case 1:
		std::cout << "Last Name: " << std::endl;
		return (this->lastName);
	case 2:
		std::cout << "Nickname: " << std::endl;
		return (this->nickName);
	case 3:
		std::cout << "PhoneNumber: " << std::endl;
		return (this->phoneNumber);
	case 4:
		std::cout << "Darkest Secret: " << std::endl;
		return (this->darkestSecret);
	default:
		std::cout << "First Name: " << std::endl;
		return (this->firstName);
	}
}

std::string	Contact::getContactInfo(size_t type) {
	switch (type)
	{
	case 0:
		return (this->firstName);
	case 1:
		return (this->lastName);
	case 2:
		return (this->nickName);
	case 3:
		return (this->phoneNumber);
	case 4:
		return (this->darkestSecret);
	default:
		return (this->firstName);
	}
}

// OBS: loop para todos os casos, somente fecha quando tem EOF.

bool	Contact::setContact(void) {
	std::string info;

	for (size_t i = 0; i < 5; i++) {
		std::string &field = this->setContactInfo(i);
		std::getline(std::cin, info);
		while ((i == 3 && !onlyDigit(info)) || (onlyWhiteSpaces(info))) {
			if (std::cin.eof())
				return (false);
			std::cerr << "Invalid input!" << std::endl;
			setContactInfo(i);
			std::getline(std::cin, info);
		}
		field = info;
	}
	return (true);
}

/// @brief This function verifies if the given string
/// is composed only by digits.
/// @param str 
/// @return 
bool	onlyDigit(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (str.at(i) < '0' || str.at(i) > '9')
			return (false);
	}
	return (true);
}

/// @brief This function checks if the given string
/// is composed only by white-spaces.
/// @param str 
/// @return 
bool	onlyWhiteSpaces(std::string str) {
	for (size_t	i = 0; i < str.length(); i++) {
		if (!std::isspace(str.at(i)))
			return (false);
	}
	return (true);
}
