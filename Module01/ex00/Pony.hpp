/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:54:05 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 13:55:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

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
