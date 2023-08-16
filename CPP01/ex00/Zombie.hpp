/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:13:44 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/16 21:13:45 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie();										// Default constructor
	Zombie(const std::string& name);				// Parameterized constructor
	Zombie(const Zombie& other);					// Copy constructor
	Zombie& operator=(const Zombie& other);			// Assignment operator
	~Zombie();										// Destructor

	void announce() const;
	void setName(const std::string& name);

private:
	std::string _name;
};

#endif // ZOMBIE_HPP
