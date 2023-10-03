/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:17:17 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 21:03:18 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
# define	ICE_HPP

# include	"AMateria.hpp"
# include	<iostream>
# include	"ICharacter.hpp"

class	Ice : public AMateria
{
	private:

	public:

		Ice();
		Ice(const Ice &src);
		Ice &operator = (const Ice &c);
		void use(ICharacter& target);
		Ice* clone() const;
		std::string const &getType() const;
		~Ice();
};

#endif
