/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:09:36 by aramon            #+#    #+#             */
/*   Updated: 2023/10/02 14:07:30 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

# include	"IMateriaSource.hpp"
# include	"AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator = (const MateriaSource &src);

		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const &type);
};

#endif
