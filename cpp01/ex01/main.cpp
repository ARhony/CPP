/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:54:17 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 13:08:04 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name );

int	main()
{
	Zombie	*horde = zombieHorde(5, "Jeff");

	delete[] horde;

	return (0);
}
