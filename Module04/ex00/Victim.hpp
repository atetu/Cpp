/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:40 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	public:
		Victim(std::string n);
		virtual ~Victim();
		Victim(Victim const &to_copy);
		Victim &operator=(Victim const &to_copy);
		std::string getName(void) const;
		virtual void getPolymorphed(void) const;

	protected:
		Victim();
		std::string name;
};

std::ostream &operator<<(std::ostream &out_flux, const Victim &victim);
#endif
