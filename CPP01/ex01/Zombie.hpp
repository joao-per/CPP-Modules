/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:52 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:13:53 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();

    void announce(void) const;

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
