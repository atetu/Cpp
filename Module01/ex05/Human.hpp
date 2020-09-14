/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:28:59 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 19:27:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		std::string identify(void) const;
		/*returns const Brain since const variable */ 
		/*const at the end because the method will not modify the object*/
		const Brain &getBrain(void) const;
	
	private:
		const Brain brain;
};
#endif
