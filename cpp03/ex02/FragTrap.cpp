/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:34:32 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:39:13 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] - " << this->name << " constructed." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "[FragTrap] - " << this->name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag)
{
	*this = frag;
	std::cout << "[FragTrap] - " << this->name << " has been copied with copy constuctor." << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap& frag)
{
	this->name = frag.name;
	this->health = frag.health;
	this->energy = frag.energy;
	this->damage = frag.damage;
	std::cout << "[FragTrap] - " << this->name << " has been copied with copy assignment operator." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] - " << this->name << " positively request a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] - " << this->name << " destructed." << std::endl;
}
