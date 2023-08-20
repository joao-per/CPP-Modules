/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:36:55 by joao-per          #+#    #+#             */
/*   Updated: 2023/08/20 12:38:21 by joao-per         ###   ########.fr       */
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

int main(int argc, char** argv)
{
	if(argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream inputFile(argv[1]);
	if(!inputFile)
	{
		std::cerr << "Error opening file: " << argv[1] << std::endl;
		return (1);
	}

	std::ostringstream ss;
	ss << inputFile.rdbuf();  // Read the entire file into a string
	inputFile.close();

	std::string content = ss.str();
	replaceString(content, argv[2], argv[3]);

	std::ofstream outputFile(std::string(argv[1]) + ".replace");
	if(!outputFile)
	{
		std::cerr << "Error creating the replacement file." << std::endl;
		return (1);
	}

	outputFile << content;
	outputFile.close();

	return (0);
}
