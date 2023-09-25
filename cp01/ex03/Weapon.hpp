/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:31:22 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 19:18:23 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Weapon
{
	private:

		std::string		type;

	public:

		Weapon();
		Weapon(const std::string t);
		~Weapon();

		const std::string		&getType() const;
		void					setType(const std::string str);

};
