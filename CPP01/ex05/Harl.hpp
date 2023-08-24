/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/28 11:44:51 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
    static const int numOfComplaints = 4; // Number of complaint levels
    std::string complaintLevels[numOfComplaints]; // Array of complaint levels
    void (Harl::*complaintFunctions[numOfComplaints])(); // Array of function pointers

    void debug();
    void info();
    void warning();
    void error();

public:
    Harl();
    void complain(std::string level); // Function that calls the corresponding function using the function pointer
};

#endif
