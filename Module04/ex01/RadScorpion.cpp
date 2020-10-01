/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:21:39 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:21:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &to_copy)
{
	if (this != &to_copy)
		Enemy::operator=(to_copy);
	return (*this);
}
