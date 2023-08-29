/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:36:55 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/29 13:36:56 by joao-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void replaceString(std::string& content, const std::string& s1, const std::string& s2)
{
	size_t pos = content.find(s1);
	while(pos != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1, pos + s2.length());
	}
}

int main(int ac, char** av)
{
	if(ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream inputFile(av[1]);
	if(!inputFile)
	{
		std::cerr << "Error opening file: " << av[1] << std::endl;
		return (1);
	}

	std::ostringstream ss;
	ss << inputFile.rdbuf();  // Read the entire file into a string
	inputFile.close();

	std::string content = ss.str();
	replaceString(content, av[2], av[3]);

	std::ofstream outputFile((std::string(av[1]) + ".replace").c_str());
	if(!outputFile)
	{
		std::cerr << "Error creating the replacement file." << std::endl;
		return (1);
	}

	outputFile << content;
	outputFile.close();

	return (0);
}
