/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:03:50 by joao-per          #+#    #+#             */
/*   Updated: 2023/06/26 14:03:50 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
	: contactCount(0) {}

bool PhoneBook::addContact(const Contact& contact) {
	if (contactCount >= MAX_CONTACTS) {
		for (int i = 0; i < MAX_CONTACTS - 1; i++) {
			contacts[i] = contacts[i + 1];
		}
		contactCount--;
	}

	contacts[contactCount++] = contact;
	return true;
}

void PhoneBook::displayContacts() const {
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i = 0; i < contactCount; i++) {
		std::cout << std::setw(10) << i << "|"
				  << truncateString(contacts[i].getFirstName(), 10) << "|"
				  << truncateString(contacts[i].getLastName(), 10) << "|"
				  << truncateString(contacts[i].getNickname(), 10) << "|"
				  << std::endl;
	}
}

void PhoneBook::displayContactDetails(int index) const
{
	if (index < 0 || index >= contactCount)
	{
		std::cout << "Invalid contact index." << std::endl;
		return;
	}

	const Contact& contact = contacts[index];

	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

std::string PhoneBook::truncateString(const std::string& str, std::string::size_type width) const {
	if (str.length() <= width)
		return str;
	else
		return str.substr(0, width - 1) + ".";
}
