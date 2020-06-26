#include "IAsteroid.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "IMiningLaser.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"


int main()
{
	DeepCoreMiner deep;
	StripMiner strip;
	Asteroid asteroid;
	Comet comet;
	deep.mine(&asteroid);	
	deep.mine(&comet);	
	std::cout << asteroid.getName() << std::endl;
	strip.mine(&asteroid);	
	strip.mine(&comet);	
	std::cout << comet.getName() << std::endl;

	MiningBarge miningbarge;
	miningbarge.equip(&deep);
	miningbarge.equip(&strip);
	miningbarge.mine(&asteroid);
	miningbarge.mine(&comet);
}
