/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:14:55 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:21:50 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const std::string &n) : Animal("Cat")
{
	std::cout << "[C] Creating a cat" << std::endl;
	this->_type = n;
}

Cat::Cat(const Cat &c)
{
	_type = c._type;
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

Cat &Cat::operator = (const Cat &c)
{
	this->_type = c._type;
	if (this != &c)
		std::cout << "[C] Custom affectation complete" << std::endl;
	else
		std::cout << "[!C] Self affectation" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[D] Destroying the cat" << std::endl;
}
