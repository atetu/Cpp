/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Eval.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:35:46 by user42            #+#    #+#             */
/*   Updated: 2020/09/17 16:35:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Eval.hpp"

Eval::Eval(std::string expression) : _expression(expression)
{
}

Eval::~Eval()
{
}

Eval::Eval(Eval const &object_to_copy)
{
	operator=(object_to_copy);
}

Eval &Eval::operator=(Eval const &object_to_copy)
{
	if (this != &object_to_copy)
		_expression = object_to_copy._expression;
	return *this;
}

void Eval::parsing()
{
	std::string possible_char = "()0123456789.+-*/ ";
	std::string result;
	for (size_t i =0 ; i < _expression.size(); i++)
	{
		if (possible_char.find(_expression[i]) == std::string::npos)
		{
			std::cout << "Invalid expression." << std::endl;
			return;
		}
	}
	while (_expression.find('(') != std::string::npos && _expression.find(')') != std::string::npos)
	{
		simplify();
	}
	result = calculate_intermediaries(_expression);
	std::cout << result << std::endl;
	return;
}

void Eval::simplify()
{
	std::string possible_char = "0123456789.+-*/ ";
	std::string sub_expression;
	std::string result;
	std::stringstream ss;
	size_t j;

	for (size_t i = 0; i < _expression.size(); i++)
	{
		if (_expression[i] == '(')
		{
			j = i + 1;
			for (; j < _expression.size() && _expression[j] != '(' && _expression[j] != ')'; j++);
			if (_expression[j] == '(')
			{
				i = j;
			}
			else if (_expression[j] == ')')
			{
				sub_expression = _expression.substr(i + 1, j -i - 1);
				result = calculate_intermediaries(sub_expression);

				ss << _expression.substr(0, i) << result << _expression.substr(j + 1, _expression.size() - (j + 1));
				_expression = ss.str();
				result.clear();
//				std::cout << _expression << std::endl;
				return;
			}	

		}
		else if (_expression[i] == ')')
		{
			sub_expression = _expression.substr(j + 1, i -j - 1);
			result = calculate_intermediaries(sub_expression);

			ss << _expression.substr(0, j) << result << _expression.substr(i + 1, _expression.size() - (i + 1));
			_expression = ss.str();
			result.clear();
			//				std::cout << _expression << std::endl;
			return;
		}	
	}
}

	std::string Eval::calculate_intermediaries(std::string str)
	{
		std::string operand = "+-*/";
		int nb_strings = 0;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (operand.find(str[i]))
				nb_strings++;
		}
		std::string number;
		float float_num;
		int previous = 0;
		int i = 0;
		t_list *first;
		t_list **begin;
		first = NULL;
		begin = &first;
		std::size_t found = str.find_first_of(operand);
		if (found == 0 && str[found] == '-')
			found = str.find_first_of(operand, found + 1);
		while (found != std::string::npos)
		{
			if (found == 0 || found == str.size())
			{
				std::cout << "Invalid expression.\n";
				return 0;
			}
			number = str.substr(previous, found - previous);
			std::istringstream s(number);
			s >>float_num;
			char op = str[found];
			first = create_element(&first, float_num, op);
			previous = found + 1;
			if (str[previous] == '-')
				found = str.find_first_of(operand, found + 2);
			else
				found = str.find_first_of(operand, found + 1);
			i++;
			number.clear();
		}
		number = str.substr(previous, str.size() - previous);
		std::istringstream s(number);
		s >>float_num;
		first = create_element(&first, float_num, '0');
		number.clear();
		first = mul_div_element(&first);
		first = add_sub_element(&first);
		float_num = (first->obj)->toFloat();
		std::ostringstream ss;
		ss << float_num;
		number = ss.str();
		return (number);
	}

	t_list *Eval::create_element(t_list **begin, float float_num, char op)
	{
		t_list *element;
		element = new t_list();
		t_list *tmp = *begin;
		element->obj = new Fixed(float_num);
		element->operand = op;
		element->next = 0;
		if (*begin == 0)
		{
			begin = &element;
			return element;
		}
		else
		{
			while (tmp->next != 0)
				tmp = tmp->next;
			tmp->next = element;
		}

		return (*begin);
	}

	t_list *Eval::mul_div_element(t_list **begin)
	{
		t_list *destroy;
		t_list *keep;
		t_list *element;
		element = *begin;
		t_list *tmp = element;
		t_list *tmp2 = element;
		while (element->next != NULL)
		{
			while (element->operand != '*' && element->operand != '/' && element->next != NULL)
				element = element->next;
			if (element->operand == '*' || element->operand == '/')
			{
				Fixed *result = (element->next)->obj;
				if (element->operand == '*') 
					*result	= *(element->obj) * (*result);
				else
					*result	= *(element->obj) / (*result);
				destroy = element;
				keep = element->next;
				if (tmp == destroy)
				{
					tmp2 = keep;
					element = keep;
				}		
				else
				{
					while (tmp->next != destroy)
						tmp = tmp->next;
					tmp->next = keep;
					element = tmp2;
					tmp = tmp2;
				}
			}
			else 
				return (tmp);
		}
		return (element);
	}

	t_list *Eval::add_sub_element(t_list **begin)
	{
		t_list *destroy;
		t_list *keep;
		t_list *element;
		element = *begin;
		t_list *tmp = element;
		t_list *tmp2 = element;
		while (element->next != NULL)
		{
			while (element->operand != '+' && element->operand != '-' && element->next != NULL)
				element = element->next;
			if (element->operand == '+' || element->operand == '-')
			{
				Fixed *result = (element->next)->obj;
				if (element->operand == '+') 
					*result	= *(element->obj) + (*result);
				else
					*result	= *(element->obj) - (*result);
				destroy = element;
				keep = element->next;
				if (*begin == destroy)
				{
					tmp2 = keep;
					element = keep;
					begin = &element;
				}		
				else
				{
					while (tmp->next != destroy)
						tmp = tmp->next;
					tmp->next = keep;
					element = tmp2;
					tmp = tmp2;
				}
				delete destroy->obj;
				delete destroy;
			}
			else 
				return (tmp);
		}
		return (element);
	}
