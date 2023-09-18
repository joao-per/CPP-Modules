/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:06:08 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/18 12:06:09 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};