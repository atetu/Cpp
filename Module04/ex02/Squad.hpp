#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		~Squad();
		Squad(Squad const &to_copy);
		Squad &operator=(Squad const &to_copy);
		int getCount() const;
		ISpaceMarine* getUnit(int n) const;
		int push(ISpaceMarine *unit);

	private:
		int count;
		typedef struct	s_container
		{
			ISpaceMarine *unit;
			int unit_nb;
			struct s_container *next;
		}		t_container;

		t_container *begin_list;
};
#endif
