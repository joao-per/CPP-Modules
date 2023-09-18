/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:06:23 by joao-per          #+#    #+#             */
/*   Updated: 2023/09/18 12:06:24 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materias[4];

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource& operator=(MateriaSource const & other);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};
