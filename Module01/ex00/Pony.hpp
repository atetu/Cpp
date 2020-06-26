#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(std::string color, int height);
		void	display(void);
		void	eat(int nb_apples);
		void	walk(int km);

	private:
		std::string m_color;
		int m_height;
};
#endif
