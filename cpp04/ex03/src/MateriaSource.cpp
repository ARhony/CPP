/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:53:51 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:25:02 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[C] Creating a materia source" << std::endl;
	int i = -1;
	while (++i < 4)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	int i = -1;
	while (++i < 4)
		this->_materias[i] = src._materias[i]->clone();
	std::cout << "[C] Creating a materia source by copy " << std::endl;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &src)
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_materias[i])
			delete (this->_materias[i]);
		this->_materias[i] = src._materias[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = -1;
	while (++i < 4)
	{
		if (!this->_materias[i])
		{
			std::cout << "Materia " << m->getType() << " learned!" << std::endl;
			this->_materias[i] = m;
			return ;
		}
	}
	std::cout << "Cannot learn more than 4 materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int	i = -1;
	while (++i < 4)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << "Materia " << type << " created!" << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << "Materia " << type << " not found!" << std::endl;
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_materias[i])
			delete (this->_materias[i]);
	}
	std::cout << "[D] Destroying a materia source" << std::endl;
}
