/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:27:01 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:43:15 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[ScavTrap] - " << this->name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(n)
{
	std::cout << "[ScavTrap] - " << this->name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	*this = scav;
	std::cout << "[ScavTrap] - " << this->name << " has been copied with copy constuctor." << std::endl;
}

ScavTrap	&ScavTrap::operator = (ScavTrap const &s)
{
	this->name = s.name;
	this->health = s.health;
	this->energy = s.energy;
	this->damage = s.damage;
	std::cout << "[ScavTrap] - " << this->name << " has been copied with copy assignment operator." << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " has entered in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] - " << this->name << " destructed " << std::endl;
}
