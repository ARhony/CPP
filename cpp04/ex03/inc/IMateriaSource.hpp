/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:08:28 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 20:42:23 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

# include	"AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
