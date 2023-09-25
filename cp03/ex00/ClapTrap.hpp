/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:50:43 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 22:33:00 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
	private :

		std::string		name;
		int				health = 10;
		int				energy = 10;
		int				damage = 0;

	public :

		ClapTrap();
		ClapTrap(const std::string& name);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		~ClapTrap();

};
