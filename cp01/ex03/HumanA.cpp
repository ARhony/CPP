/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:35:17 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 18:44:23 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string n, Weapon& w) : name(n), weapon(w) {}
HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->name + " attacks with their " + this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(const Weapon w)
{
	this->weapon = w;
}

void	HumanA::setName(const std::string n)
{
	this->name = n;
}
