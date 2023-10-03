/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:10:13 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 20:56:58 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AMATERIA_HPP
# define	AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria &mat);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
