/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:51:23 by user42            #+#    #+#             */
/*   Updated: 2020/09/14 16:51:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human human;
	human.action("meleeAttack", "target");
	human.action("rangedAttack", "target");
	human.action("intimidatingShout", "target");
	human.action("other", "target");
}
