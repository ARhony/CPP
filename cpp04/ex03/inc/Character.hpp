/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:01:01 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:22:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

# include	"ICharacter.hpp"
# include	"AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	Character : public ICharacter
{
	private:
		const std::string	_name;
		AMateria			*_inventory[4];

	public:
		Character();
		Character(const std::string &c);
		Character(const Character& c);
		Character &operator = (const Character &c);
		AMateria* getMateria(int idx);
		~Character();

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
