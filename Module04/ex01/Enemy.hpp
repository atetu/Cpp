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
