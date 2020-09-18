/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 19:38:36 by user42            #+#    #+#             */
/*   Updated: 2020/09/18 19:38:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <random>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string n);
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &to_copy);
		NinjaTrap &operator=(NinjaTrap const &to_copy);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void ninjaShoebox(ClapTrap &obj);
		void ninjaShoebox(FragTrap &obj);
		void ninjaShoebox(ScavTrap &obj);
		void ninjaShoebox(NinjaTrap &obj);
};
#endif
