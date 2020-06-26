#ifndef COMET_HPP
#define COMET_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp" 

class StripMiner;
class DeepCoreMiner;

class Comet : public IAsteroid 
{
	public:
		Comet();
		virtual	~Comet();
		Comet(Comet const &to_copy);
		Comet &operator=(Comet const &to_copy);
		std::string beMined(DeepCoreMiner *deep) const;	
		std::string beMined(StripMiner *strip) const;	
		std::string getName() const;	
	private:
		std::string _name;
};
#endif
