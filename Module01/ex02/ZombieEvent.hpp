/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:15:21 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:42:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <stdlib.h>
#include <time.h> 
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		static std::string name[10];
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();
		~ZombieEvent();

	private:
		std::string m_name;
		std::string m_type;
};
#endif
