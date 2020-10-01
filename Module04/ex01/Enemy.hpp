/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:20:52 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:20:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy(Enemy const &to_copy);
		Enemy &operator=(Enemy const &to_copy);
		std::string getType(void) const;
		int getHP(void) const;	
		virtual void takeDamage(int);

	protected:
		Enemy();
		int _hp;
		std::string _type;
};
#endif
