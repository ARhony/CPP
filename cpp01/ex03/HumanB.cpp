/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:11:33 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 18:53:08 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string n) : name(n) {}
HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
}

void	HumanB::setName(const std::string n)
{
	this->name = n;
}
