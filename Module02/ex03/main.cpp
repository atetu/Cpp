/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:36:21 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:36:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<sstream>
#include "Eval.hpp"

int main()
{
	std::cout << "56*6+20/(10-86) = ";
	Eval eval("56*6+20/(10-86)");
	eval.parsing();
	std::cout << "expected result : 335.7368" << std::endl;
	std::cout << "(59-3*(10/2))+58 = ";
	Eval eval2("(59-3*(10/2))+58");
	eval2.parsing();
	std::cout << "expected result : 102" << std::endl;
}
