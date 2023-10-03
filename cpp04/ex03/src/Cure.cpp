/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:18:23 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:22:18 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "[C] Creating a cure materia" << std::endl;
}

Cure::Cure(const Cure &mat) : AMateria(mat.getType())
{
	std::cout << "[C] Creating a copy of a cure materia" << std::endl;
}

Cure &Cure::operator = (const Cure &src)
{
	std::cout << "Assigned from " << src.getType() << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure	*Cure::clone(void) const
{
	return (new Cure(*this));
}

Cure::~Cure()
{
	std::cout << "[D] Destroying the materia " << this->_type << std::endl;
}
