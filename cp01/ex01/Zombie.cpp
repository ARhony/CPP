/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:35:50 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 13:08:16 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "[C] Zombie created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "[D] Zombie destroyed." << std::endl;
}

void	Zombie::SetName(const std::string& str)
{
	name = str;
}

std::string	Zombie::GetName() const
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << name + ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie( std::string name )
{
	Zombie	*z = new Zombie();
	z->SetName(name);
	return (z);
}

void	Zombie::randomChump(std::string name)
{
	Zombie	z;
	z.SetName(name);
	z.announce();
}


