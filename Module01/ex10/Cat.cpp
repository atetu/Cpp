/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:14:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 17:26:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::console()
{
	std::string text;
	while (1)
	{
		std::getline(std::cin, text);
		std::cout << text;
		if (std::cin.eof())
			break;
		std::cout << std::endl;
	}
	
}

void Cat::file(std::string filename)
{
	std::ifstream file_srcs(filename);
	std::string line;
	if (file_srcs)
	{
		while (std::getline(file_srcs, line))
			std::cout << line << std::endl;
		file_srcs.close();
	}
	else
		std::cout << "Error: could not open file.\n";
}
