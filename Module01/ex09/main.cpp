/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:01:43 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 17:13:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger logger("file");
	logger.log("console", "this is an example");
	logger.log("console", "this is a second example");
	logger.log("file", "this is an example");
	logger.log("file", "this is a second example");
	logger.log("wrong_dest", "this is a second example");
}
