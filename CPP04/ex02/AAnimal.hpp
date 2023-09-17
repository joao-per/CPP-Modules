/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:16:03 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/17 20:04:51 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string type;
		AAnimal();
	public:
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
		virtual AAnimal* clone() const = 0;  
};

#endif
