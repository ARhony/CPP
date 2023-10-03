/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:09:54 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:21:17 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal type")
{
	std::cout << "[C] Creating an animal" << std::endl;
}

Animal::Animal(const std::string &type)
{
	std::cout << "[C] Creating a " << type << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &a)
{
	_type = a._type;
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

Animal &Animal::operator = (const Animal &a)
{
	this->_type = a._type;
	if (this != &a)
		std::cout << "[C] Custom affectation complete" << std::endl;
	else
		std::cout << "[!C] Self affectation" << std::endl;
	return (*this);
}

const std::string Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[D] Destroying animal" << std::endl;
}
