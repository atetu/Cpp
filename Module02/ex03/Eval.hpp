/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Eval.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:55 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:35:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_HPP
#define EVAL_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstddef>
#include "Fixed.hpp"

typedef struct s_list{
	Fixed *obj;
	char operand;
	s_list *next;
}		t_list;

class Eval
{
	public:
		Eval(std::string expression);
		~Eval();
		Eval(Eval const &object_to_copy);
		Eval &operator=(Eval const &object_to_copy);

		void parsing();
		void simplify();
		std::string calculate_intermediaries(std::string str);
		void calculate_total();
		t_list *create_element(t_list **begin, float float_num, char op); 
		t_list *mul_div_element(t_list **begin); 
		t_list *add_sub_element(t_list **begin); 
	private:
		Eval();
		std::string _expression;
};

#endif
