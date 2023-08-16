/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:16:34 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:16:34 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int contactCount;

public:
	PhoneBook();

	bool addContact(const Contact& contact);
	void displayContacts() const;
	void displayContactDetails(int index) const;
	std::string truncateString(const std::string& str, std::string::size_type width) const;
};

#endif
