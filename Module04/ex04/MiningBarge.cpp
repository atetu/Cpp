#include "MiningBarge.hpp"

MiningBarge::MiningBarge(): nb_laser(0)
{
}

MiningBarge::~MiningBarge()
{
}

MiningBarge::MiningBarge(MiningBarge const &to_copy)
{
	for(int i = 0; i < nb_laser; i++)
	{
		laser[i] = to_copy.laser[i];
	}
	nb_laser = to_copy.nb_laser;
}

MiningBarge &MiningBarge::operator=(MiningBarge const &to_copy)
{
	for(int i = 0; i < nb_laser; i++)
	{
		laser[i] = to_copy.laser[i];
	}
	nb_laser = to_copy.nb_laser;
	return (*this);
}

void MiningBarge::equip(IMiningLaser *mininglaser)
{
	if (nb_laser < 4)
	{
		laser[nb_laser] = mininglaser;
		nb_laser++;
	}
}

void MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0; i < nb_laser; i++)
	{
		this->laser[i]->mine(asteroid);
	}
}
