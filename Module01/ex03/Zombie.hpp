/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:57:17 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 15:16:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void setZombieType(std::string type);
		void setZombieName(std::string name);
		void annonce();
		~Zombie();

	private:
		std::string m_name;
		std::string m_type;
};
#endif
