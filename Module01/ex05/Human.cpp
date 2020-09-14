/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:29:02 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:30:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain(36000)
{
}

Human::~Human()
{
}

std::string Human::identify(void) const
{
	std::string address;
	address = brain.identify();
	return address;
}

const Brain &Human::getBrain(void) const
{
	return brain;
}
