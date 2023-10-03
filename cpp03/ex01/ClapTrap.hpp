/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:50:43 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:32:39 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected :

		std::string		name;
		int				health;
		int				energy;
		int				damage;

		ClapTrap();

	public :

		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap	&operator = (ClapTrap const &c);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		~ClapTrap();
};

#endif
