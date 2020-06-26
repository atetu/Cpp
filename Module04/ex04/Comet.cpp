#include "Comet.hpp"

Comet::Comet() :_name("Comet") 
{
}

Comet::~Comet()
{
}

Comet::Comet(Comet const &to_copy)
{
	*this = to_copy;
}

Comet &Comet::operator=(Comet const &to_copy)
{
	return (*this);
}

std::string Comet::beMined(DeepCoreMiner *deep) const
{
	return ("Mithril");
}

std::string Comet::beMined(StripMiner *strip) const
{
	return ("Tartarite");
}

std::string Comet::getName() const
{
	return (_name);
}
