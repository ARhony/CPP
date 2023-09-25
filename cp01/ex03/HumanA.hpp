/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:35:45 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 19:14:33 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	private:

		std::string		name;
		Weapon			&weapon;

	public:

		HumanA(const std::string n, Weapon& w);
		~HumanA();

		void			attack();
		void			setWeapon(const Weapon w);
		void			setName(const std::string n);
};
