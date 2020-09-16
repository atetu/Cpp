/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:28:56 by user42            #+#    #+#             */
/*   Updated: 2020/09/16 15:22:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream> 

Brain::Brain(int neurons) : m_neurons(neurons)
{
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	/*Stringstream: Stream class to operate on strings. 
	Objects of this class use a string buffer that contains a sequence of characters. 
	This sequence of characters can be accessed directly as a string object, using member str.*/
	std::stringstream address;
	address << this;
	std::string name = address.str();
	return name;
}

void Brain::get_infos(void) const // otherwise does not compile with the flags
{
	std::cout << "This Brain has " << m_neurons << " neurons." << std::endl;
}