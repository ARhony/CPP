/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:48:01 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 23:55:43 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "[C] Creating a dog" << std::endl;
}

Dog::Dog(const std::string &n) : Animal("Dog")
{
	this->_type = n;
	this->_brain = new Brain();
	std::cout << "[C] Creating a dog" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	this->_type = d._type;
	this->_brain = new Brain(*(d._brain));
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

Dog &Dog::operator = (const Dog &d)
{
	this->_type = d._type;
	if (this != &d)
	{
		std::cout << "[C] Custom affectation complete" << std::endl;
		delete this->_brain;
		this->_brain = new Brain(*(d._brain));
	}
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
	delete (this->_brain);
}
