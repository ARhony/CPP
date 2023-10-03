/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:52:45 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:34:38 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	int i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	std::cout << "[C] Creating a new character" << std::endl;
}

Character::Character(const std::string &c) : _name(c)
{
	int i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	std::cout << "[C] Creating a new character of name " << c << std::endl;
}

Character::Character(const Character &c) : _name(c.getName())
{
	int i = -1;
	while (++i < 4)
	{
		if (c._inventory[i])
			this->_inventory[i] = c._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	std::cout << "[C] Creating a copy of the character " << c._name << std::endl;
}

Character &Character::operator = (const Character &c)
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
		if (c._inventory[i])
			this->_inventory[i] = c._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = -1;
	if (!m)
	{
		std::cout << "Invalid materia" << std::endl;
		return ;
	}
	while (++i < 4)
	{
		if (!(this->_inventory[i]))
		{
			this->_inventory[i] = m;
			std::cout << this->getName() << " equips the materia " << this->_inventory[i]->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << " has no inventory space available for another Materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (!(this->_inventory[idx]))
		std::cout << "There is no materia in " << this->getName() << "'s inventory at this slot" << std::endl;
	else
	{
		std::cout << this->getName() << " drops the materia on the ground breaking the materia" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid slot" << std::endl;
		return ;
	}
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->getName() << " has no materia in his inventory in slot " << idx << std::endl;
}

AMateria* Character::getMateria(int idx)
{
	return (this->_inventory[idx]);
}

Character::~Character()
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
}
