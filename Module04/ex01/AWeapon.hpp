/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:20:23 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:20:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const &to_copy);
		AWeapon &operator=(AWeapon const &to_copy);
		std::string getName(void) const;
		int getAPCost(void) const;	
		int getDamage(void) const;
		virtual void attack() const = 0; // pure virtual method

	protected:
		AWeapon();
		std::string _name;
		int _apcost;
		int _damage;
};
#endif
