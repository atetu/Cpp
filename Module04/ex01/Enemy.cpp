/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:20:45 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 19:20:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Enemy &Enemy::operator=(Enemy const &to_copy)
{
	if (this != &to_copy)
	{
		this->_hp = to_copy._hp;
		this->_type = to_copy._type;
	}
	return *this;
}

std::string Enemy::getType(void) const
{
	return (this->_type);
}

int Enemy::getHP(void) const
{
	return (this->_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		damage = 0;
	this->_hp -= damage;
	if (getHP() < 0)
		this->_hp = 0;
}
