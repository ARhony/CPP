/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:14:55 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 23:55:26 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "[C] Creating a cat" << std::endl;
}

Cat::Cat(const std::string &n) : Animal("cat")
{
	this->_brain = new Brain();
	this->_type = n;
	std::cout << "[C] Creating a cat" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c)
{
	this->_type = c._type;
	this->_brain = new Brain(*(c._brain));
	if (_type.empty())
		std::cout << "Animal type is still yet to define" << std::endl;
	std::cout << "[C] Creating an animal by copy" << std::endl;
}

Cat &Cat::operator = (const Cat &c)
{
	this->_type = c._type;
	if (this != &c)
	{
		std::cout << "[C] Custom affectation complete" << std::endl;
		delete this->_brain;
		this->_brain = new Brain(*(c._brain));
	}
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
	delete (this->_brain);
}
