/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:19:49 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 20:36:41 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CURE_HPP
# define	CURE_HPP

# include	"AMateria.hpp"
# include	<iostream>
# include	"ICharacter.hpp"

class	Cure : public AMateria
{
	private:

	public:

		Cure();
		Cure(const Cure &src);
		Cure &operator = (const Cure &c);
		void use(ICharacter& target);
		Cure* clone() const;
		std::string const &getType() const;
		~Cure();

};

#endif
