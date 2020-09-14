/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:57:24 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:45:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include "Zombie.hpp"

class	ZombieHorde
{
	public:
		static std::string name[10];
		static std::string type[3];
		ZombieHorde(int n);
		void announce(void);
		 ~ZombieHorde();

	private:
		Zombie *array;
		int	nb_zombies;
};
