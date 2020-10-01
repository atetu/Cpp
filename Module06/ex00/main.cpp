/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:42:01 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 19:15:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Convert.hpp"
#include <limits>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	Convert convert(argv[1]);
	if (!convert.conv())
		return (-1);
	convert.printChar();
	convert.printInt();
	convert.printFloat();
	convert.printDouble();
	return (0);
}
