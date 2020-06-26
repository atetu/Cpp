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
	operator=(to_copy);
}

Enemy &Enemy::operator=(Enemy const &to_copy)
{
	if (this != &to_copy)
	{
		_hp = to_copy._hp;
		_type = to_copy._type;
	}
	return *this;
}

std::string Enemy::getType(void) const
{
	return (_type);
}

int Enemy::getHP(void) const
{
	return (_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		damage = 0;
	_hp -= damage;
	if (getHP() < 0)
		_hp = 0;
}
