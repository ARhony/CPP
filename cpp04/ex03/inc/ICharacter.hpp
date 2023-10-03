/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:22:00 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:23:01 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICHARACTER_HPP
# define	ICHARACTER_HPP

# include	<iostream>
# include	"AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual		~ICharacter() {}
		virtual		std::string const & getName() const = 0;
		virtual		void equip(AMateria* m) = 0;
		virtual		void unequip(int idx) = 0;
		virtual		void use(int idx, ICharacter& target) = 0;
};

#endif
