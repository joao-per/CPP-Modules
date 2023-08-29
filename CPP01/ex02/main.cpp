/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:42:32 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/29 13:16:30 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    // 1. A string variable initialized to "HI THIS IS BRAIN".
    std::string brainString = "HI THIS IS BRAIN";

    // 2. stringPTR: A pointer to the string.
    std::string *stringPTR = &brainString;

    // 3. stringREF: A reference to the string.
    std::string &stringREF = brainString;

    // Printing out memory addresses
    std::cout << "Address of brainString: " << &brainString << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl; 

    // Printing out string values
    std::cout << "\nValue of brainString: " << brainString << std::endl;
    std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return 0;
}
