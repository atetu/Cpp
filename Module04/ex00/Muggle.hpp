/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Muggle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:18:10 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 18:18:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUGGLE_HPP
#define MUGGLE_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Muggle : public Victim
{
	public:
		Muggle(std::string n);
		~Muggle();
		Muggle(Muggle const &to_copy);
		Muggle &operator=(Muggle const &to_copy);
		void getPolymorphed(void) const;

	protected:
		Muggle();
};
#endif
