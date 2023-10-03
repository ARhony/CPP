/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:09:54 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:20:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal type")
{
	std::cout << "[C] Creating an animal" << std::endl;
}

AAnimal::AAnimal(const std::string &type)
{
	std::cout << "[C] Creating an animal" << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(const AAnimal &a)
{
	_type = a._type;
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &a)
{
	this->_type = a._type;
	if (this != &a)
		std::cout << "[C] Custom affectation complete" << std::endl;
	else
		std::cout << "[!C] Self affectation" << std::endl;
	return (*this);
}

const std::string AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal::~AAnimal()
{
	std::cout << "[D] Destroying an animal" << std::endl;
}
