/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:52:23 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 16:52:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <random>

struct Data{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);
void *deserialize(void *raw);

#endif
