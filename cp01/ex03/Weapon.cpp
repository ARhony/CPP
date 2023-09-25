/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:29 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 18:46:39 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string t)
{
	this->type = t;
}

Weapon::~Weapon() {};

void	Weapon::setType(const std::string str)
{
	this->type = str;
}

const std::string		&Weapon::getType(void) const
{
	return (this->type);
}
