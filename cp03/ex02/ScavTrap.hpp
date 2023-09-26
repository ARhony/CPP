/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:27:16 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:46:56 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :

		ScavTrap();

	public :

		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator = (const ScavTrap &scavtrap);

		void	guardGate();

		~ScavTrap();
};

#endif
