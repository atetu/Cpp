/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:27:31 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 15:27:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str;
	str = "HI THIS IS BRAIN\n";
	std::string &reference(str);
	std::string *ptr;
	ptr = &str;
	std::cout << "str: " << str;
	std::cout << "ref: " << reference;
	std::cout << "ptr: " << *ptr;
}
