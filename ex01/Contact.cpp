/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:12:29 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/03 22:50:29 by arabelo-         ###   ########.fr       */
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

void	Contact::setContact(void) {
	std::string info;

	for (size_t i = 0; i < 5; i++) {
		std::string &field = this->setContactInfo(i);
		std::getline(std::cin, info);
		field = info;
	}
}
