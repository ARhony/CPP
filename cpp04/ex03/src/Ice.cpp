/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:17:37 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:22:14 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "[C] Creating an ice materia" << std::endl;
}

Ice::Ice(const Ice &mat) : AMateria(mat.getType())
{
	std::cout << "[C] Creating a copy of an ice materia" << std::endl;
}

Ice &Ice::operator = (const Ice &src)
{
	std::cout << "Assigned from " << src.getType() << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice		*Ice::clone(void) const
{
	return (new Ice(*this));
}

Ice::~Ice()
{
	std::cout << "[D] Destroying the materia " << this->_type << std::endl;
}
