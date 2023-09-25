/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:50:24 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 22:33:03 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "[C] Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& n)
{
	this->name = name;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " + this->name + "uses 1 energy and attacks " + target << std::endl;
	this->energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " + this->name + " takes 1 damage." << std::endl;
	this->health--;
	if (this->health < 1)
		std::cout << "ClapTrap " + this->name + "dies. Tragically." << std::endl;
	else
		std::cout << "ClapTrap " + this->name + " is now at " << this->health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->health == 10)
		std::cout << "ClapTrap " + this->name + " use 1 energy for repair. Nothing happens since he's already at full health" << std::endl;
	else
	{
		std::cout << "ClapTrap " + this->name + " use 1 energy for repair. He gains 1 health." << std::endl;
		this->health++;
	}
	this->energy--;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[D] Destructor called" << std::endl;
}
