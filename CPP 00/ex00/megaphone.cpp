/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:15:16 by joao-per          #+#    #+#             */
/*   Updated: 2023/06/22 15:15:16 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char** argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string message;
		int i = 1;
		while (i < argc)
		{
			message += argv[i];
			if (i != argc - 1)
				message += " ";
			i++;
		}
		std::string uppercasedMessage;
		for (std::size_t j = 0; j < message.length(); j++)
		{
			char c = message[j];
			uppercasedMessage += std::toupper(static_cast<unsigned char>(c));
		}

		std::cout << uppercasedMessage << std::endl;
	}
	return (0);
}
