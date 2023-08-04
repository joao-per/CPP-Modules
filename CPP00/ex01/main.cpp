#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook phoneBook;

	while (true)
	{
		std::string command;
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD")
		{
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

			std::cout << "First Name: ";
			std::cin >> firstName;

			std::cout << "Last Name: ";
			std::cin >> lastName;

			std::cout << "Nickname: ";
			std::cin >> nickname;

			std::cout << "Phone Number: ";
			bool validNumber = false;
			while (!validNumber) {
				std::cin >> phoneNumber;

				validNumber = true;
				for (std::string::iterator it = phoneNumber.begin(); it != phoneNumber.end(); ++it)
				{
					if (!(*it >= '0' && *it <= '9'))
					{
						validNumber = false;
						break;
					}
				}
				if (!validNumber)
					std::cout << "Invalid input. Phone Number should only contain digits. Please enter again: ";
			}
			std::cout << "Darkest Secret: ";
			std::cin.ignore();  // Ignore the newline character from previous input
			std::getline(std::cin, darkestSecret);

			Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();

			int index;
			std::cout << "Enter the index of the contact: ";
			std::cin >> index;

			phoneBook.displayContactDetails(index);
		}
		else if (command == "EXIT")
			break;
	}

	return 0;
}
