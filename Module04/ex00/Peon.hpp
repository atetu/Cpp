/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:19 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string n);
		~Peon();
		Peon(Peon const &to_copy);
		Peon &operator=(Peon const &to_copy);
		void getPolymorphed(void) const;

	protected:
		Peon();
};
#endif
