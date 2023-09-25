/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:11:18 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 19:14:28 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{
	private:

		std::string		name;
		Weapon			*weapon;

	public:

		HumanB(const std::string n);
		~HumanB();

		void			attack();
		void			setWeapon(Weapon& w);
		void			setName(const std::string n);
};
