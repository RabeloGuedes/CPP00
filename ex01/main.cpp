/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:00:44 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/03 22:53:08 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void	showInfos(Contact contact) {
	std::cout << "===========New Contact Info===========" << std::endl;
	std::cout << "First Name: " << contact.getContactInfo(1) << std::endl;
	std::cout << "Last Name: " << contact.getContactInfo(2) << std::endl;
	std::cout << "Nickname: " << contact.getContactInfo(3) << std::endl;
	std::cout << "PhoneNumber: " << contact.getContactInfo(4) << std::endl;
	std::cout << "Darkest Secret: " << contact.getContactInfo(5) << std::endl;
	std::cout << "===========New Contact Info===========" << std::endl;
}

void	addContact(PhoneBook phonebook) {
	Contact cont = phonebook.setContact();
	std::string	info;

	cont.setContact();
	showInfos(cont);
}

int	main(void) {
	std::string reader;
	PhoneBook	phonebook;

	std::cout << "PHONEBOOK select an option" << std::endl;
	while (!std::cin.eof()) {
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, reader);
		if (reader == "ADD") {
			addContact(phonebook);
		}
		else if (reader == "EXIT") {
			return (0);
		}
	}
}
