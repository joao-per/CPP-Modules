/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hPP                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:50 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/20 14:57:51 by joao-per         ###   ########.fr       */
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
		typedef void (Harl::*complaintFunction)(void);  // Type for function pointer
		std::map<std::string, complaintFunction> complaintsMap;
	public:
		Harl();
		void complain(std::string level);
};
