/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:25:29 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:21:51 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[C] Brain created" << std::endl;
}

Brain::Brain(const Brain &b)
{
	int	i = -1;
	while (++i < 100)
		this->_ideas[i] = b._ideas[i];
	*this = b;
}

Brain &Brain::operator = (const Brain &b)
{
	int	i = -1;
	if (this == &b)
		std::cout << "[C!] Self affectation" << std::endl;
	while (++i < 100)
		this->_ideas[i] = b._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[D] Brain destroyed" << std::endl;
}
