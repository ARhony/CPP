/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:40:51 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 13:09:44 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*		zombieHorde( int N, std::string name )
{
	int		i = -1;
	Zombie	*horde = new Zombie[N];

	while (++i < N)
	{
		horde[i].SetName(name);
		horde[i].announce();
	}

	return (horde);
}
