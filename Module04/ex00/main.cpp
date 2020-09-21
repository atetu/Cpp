/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:00 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Muggle.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "=============" <<std::endl;
	Sorcerer merlin("Merlin", "magus");
	std::cout<< merlin;
	Victim kitten("Kitten");
	std::cout << kitten;
	merlin.polymorph(kitten);
	Peon knight("Knight");
	Muggle horace("Horace");
	robert.polymorph(horace);
	return 0;
}
