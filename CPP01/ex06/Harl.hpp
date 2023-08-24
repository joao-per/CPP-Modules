/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:21 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/28 11:54:27 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
public:
    enum ComplaintLevel
    {
        UNKNOWN = 0,
        DEBUG,
        INFO,
        WARNING,
        ERROR
    };
    Harl() = default;
    void filteredComplain(std::string level);
    ComplaintLevel getComplaintLevel(const std::string& level);

private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif
