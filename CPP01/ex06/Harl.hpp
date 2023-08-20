/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:58:45 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/20 14:58:46 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <map>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
		enum ComplaintLevel
		{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			UNKNOWN
		};

		std::map<std::string, ComplaintLevel> complaintsMap =
		{
			{"DEBUG", DEBUG},
			{"INFO", INFO},
			{"WARNING", WARNING},
			{"ERROR", ERROR}
		};

	public:
		void filteredComplain(std::string level);
};
