/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:48:01 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:21:43 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const std::string &n) : Animal("Dog")
{
	std::cout << "[C] Creating a dog" << std::endl;
	this->_type = n;
}

Dog::Dog(const Dog &d)
{
	_type = d._type;
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

Dog &Dog::operator = (const Dog &d)
{
	this->_type = d._type;
	if (this != &d)
		std::cout << "[C] Custom affectation complete" << std::endl;
	else
		std::cout << "[!C] Self affectation" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[D] Destroying the dog" << std::endl;
}
