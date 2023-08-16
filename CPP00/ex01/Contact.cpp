/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:15:11 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:15:11 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const std::string& firstName, const std::string& lastName,
				const std::string& nickname, const std::string& phoneNumber,
				const std::string& darkestSecret)
	: firstName(firstName), lastName(lastName), nickname(nickname),
	phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getNickname() const {
	return nickname;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}
