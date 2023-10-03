/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:14:21 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 20:19:19 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "[C] Creating a new abstract materia of type " << type << std::endl;
}

AMateria::AMateria(AMateria &mat) : _type(mat.getType())
{
	std::cout << "[C] Creating a copy of a materia of type " << mat._type << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Using a materia on " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[D] Destroying materia source" << std::endl;
}
