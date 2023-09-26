/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:50:24 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:51:04 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), health(10), energy(10), damage(0)
{
	std::cout << "[ClapTrap] - " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const std::string& n) : name(n) , health(10), energy(10), damage(0)
{
	std::cout << "[Claptrap] - " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
	std::cout << "[ClapTrap] - " << this->name << " has been copied with copy constuctor." << std::endl;
}

ClapTrap	&ClapTrap::operator = (ClapTrap const &c)
{
	this->name = c.name;
	this->health = c.health;
	this->energy = c.energy;
	this->damage = c.damage;
    std::cout << "[ClapTrap] - " << this->name << " has been copied with copy assignment operator." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "[ClapTrap] - " << this->name << " uses 1 energy and attacks " << target << " for " << this->damage << " damage." << std::endl;
	this->energy--;
	std::cout << "[ClapTrap] - " << this->name << " is now at " << this->energy << " energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] - " << this->name + " takes " << amount << " damage." << std::endl;
	this->health -= amount;
	if (this->health < 1)
		std::cout << "[ClapTrap] - " << this->name + " dies. Tragically." << std::endl;
	else
		std::cout << "[ClapTrap] - " << this->name + " is now at " << this->health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->health <= 0)
	{
		std::cout << "[ClapTrap] - " << this->name + " is dead. He can't be repaired." << std::endl;
		return ;
	}
	if (this->health == 10)
		std::cout << "[ClapTrap] - " << this->name + " use 1 energy for repair. Nothing happens since he's already at full health" << std::endl;
	else
	{
		std::cout << "[ClapTrap] - " << this->name + " use 1 energy for repair. He gains 1 health." << std::endl;
		this->health += amount;
	}
	this->energy--;
	std::cout << "[ClapTrap] - " << this->name + " is now at " << this->health << " health and " << this->energy << " energy." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] - " << this->name << " destructed " << std::endl;
}
