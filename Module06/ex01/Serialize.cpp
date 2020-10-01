/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:52:08 by user42            #+#    #+#             */
/*   Updated: 2020/09/28 17:04:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void	*serialize(void)
{
	std::string letters = "abcdefghijklmnopqrstuvwxyz";
	char array1[8];
	char array2[8];
	char *double_array[2] = {array1, array2};
	int nb;
	char *data;

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			int x;
			x = rand() % 25;
			double_array[j][i] = letters[x]; 
		}
	}
	nb = rand() % 100;
	data = new char[20];
	for (int i = 0; i < 8; i++)
		data[i] = array1[i];
	*(data + 8) = nb;
	for (int i = 0; i < 8; i++)
		data[i + 12] = array2[i];
	return (data);
}

void *deserialize(void *raw)
{
	Data *data = new Data;
	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (data);
}
