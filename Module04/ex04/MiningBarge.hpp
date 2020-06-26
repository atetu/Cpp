#ifndef MININGBARGE_HPP
#define MININGBARGE_HPP

#include"IMiningLaser.hpp"
#include"IAsteroid.hpp"

class MiningBarge
{
	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(MiningBarge const &to_copy);
		MiningBarge &operator=(MiningBarge const &to_copy);
		void equip(IMiningLaser*);
		void mine(IAsteroid* asteroid) const;
	private:
		IMiningLaser *laser[4];
		int nb_laser;
};
#endif
